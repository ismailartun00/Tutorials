import java.util.ArrayList;
import java.util.Collections;

public class Main {

	public static void main(String[] args) {
		ArrayList<String> sehirler = new ArrayList<String>();
		
		sehirler.add("Ankara");
		sehirler.add("�stanbul");
		sehirler.add("�zmir");
		sehirler.add("Ayd�n");
		
		sehirler.remove("�stanbul");
		
		Collections.sort(sehirler);
		
		for(String sehir : sehirler) {
			System.out.println(sehir);
		}
	}

}
