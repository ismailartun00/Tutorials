#include "Impl.cpp"
int main(){
    //copy assignment
    //move assignment/constructor
    //stream inserter++
    //operator[] or()++
    //operator== !=++

    // create a queue of capacity 5
    Queue<int> q(5);
 
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);

    std::cout << "q[0]: " << q[0] << std::endl;

    
    std::cout << "The front element of Queue is " << q.Peek() << std::endl;
    q.Dequeue();
    
    q.Enqueue(4);
 
    std::cout << "The size of Queue is " << q.Size() << std::endl;
 
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    
    if (q.IsEmpty())
        std::cout << "Queue Is Empty" << std::endl;
    else
        std::cout << "Queue Is Not Empty" << std::endl;


    Queue<int> q1(5);
 
    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);

    if(q==q1){
        std::cout << "not equal" << std::endl;
    }
    else
    {
        std::cout << "equal" << std::endl;
    }

    q1 = q;

    if(q1!=q){
        std::cout << "not equal " << std::endl;
    }
    else{
        std::cout<< "equal" << std::endl;
    }
    
    Queue<int> q2(5);
    q2.Enqueue(13);
    q2.Enqueue(23);
    q2.Enqueue(33);
 
    Queue<int> q3(5);
    q3.Enqueue(11);
    q3.Enqueue(21);
    q3.Enqueue(31);

    Queue<int> q4(5);
    q4.Enqueue(12);
    q4.Enqueue(22);
    q4.Enqueue(32);

    Queue<int> q8(4);
    q8.Enqueue(66);
    q8.Enqueue(77);
    q8.Enqueue(88);
    q8 = std::move(q2); //move assignment

    Queue<int> q5(std::move(q4)); ////move constructor

    std::cout << "q8[1]: " << q8[1] << "\t" << "q5[1]: " << q5[1] << std::endl;



    Queue<std::string> q9(4);
    q9.Enqueue("as");
    q9.Enqueue("kat");
    q9.Enqueue("zakirov");
    std::cout << "q9[0]: " << q9[0] << "\t" << "q9[1]: " << q9[1] << "\t" << "q9[2]: " << q9[2] << std::endl;


    Queue<std::string> q99(q9);
    std::cout << "q99[0]: " << q99[0] << "\t" << "q99[1]: " << q99[1] << "\t" << "q99[2]: " << q99[2] << std::endl;
    
    return 0;
}