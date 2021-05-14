package com.ismailartun.superkahramankitabi

import android.content.Intent
import android.graphics.Bitmap
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import kotlinx.android.synthetic.main.recycler_row.view.*

class RecyclerAdapter(val kahramanListesi : ArrayList<String>, val kahramanGorselleri : ArrayList<Int>) : RecyclerView.Adapter<RecyclerAdapter.SuperKahramanVH>() {

    class SuperKahramanVH(itemView: View) : RecyclerView.ViewHolder(itemView) {

    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): SuperKahramanVH {
        // Inflater, LayoutInflatter, MenuInflatter
        val itemView = LayoutInflater.from(parent.context).inflate(R.layout.recycler_row, parent, false)
        return SuperKahramanVH(itemView)
    }

    override fun onBindViewHolder(holder: SuperKahramanVH, position: Int) {
        holder.itemView.recyclerViewTextView.text = kahramanListesi.get(position)
        holder.itemView.setOnClickListener{
            val intent = Intent(holder.itemView.context, TanitimActivity::class.java)
            intent.putExtra("superKahramanIsmi",kahramanListesi.get(position))
            intent.putExtra("superKahramanGorseli", kahramanGorselleri.get(position))

            /* val singleton = SingletonClass.SecilenKaraman
            singleton.gorsel = kahramanGorselleri.get(position) */

            holder.itemView.context.startActivity(intent)
        }
    }

    override fun getItemCount(): Int {
        return kahramanListesi.size
    }

}