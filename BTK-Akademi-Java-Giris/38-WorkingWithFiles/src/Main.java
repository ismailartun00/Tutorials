import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		readFile();
		writeFile();
		readFile();
	}
	
	public static void createFile() {
		File file = new File("D:\\Github\\BTK-Akademi\\Files\\students.txt");
		
		// Yeni Dosya Olu�turma
		try {
			if(file.createNewFile()) {
				System.out.println("Dosya Olu�turuldu.");
			}else {
				System.out.println("Dosya Zaten Mevcut.");
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	public static void getFileInfo() {
		File file = new File("D:\\Github\\BTK-Akademi\\Files\\students.txt");
		
		// Dosya Bilgilerini Okuma
		if(file.exists()) {
			System.out.println("Dosya Ad� : " + file.getName());
			System.out.println("Dosyan�n Yolu : " + file.getAbsolutePath());
			System.out.println("Dosya Yaz�labilir mi : " + file.canWrite());
			System.out.println("Dosya Okunabilir mi : " + file.canRead());
			System.out.println("Dosya Boyutu(byte) : " + file.length());
		}
	}
	
	public static void readFile() {
		File file = new File("D:\\Github\\BTK-Akademi\\Files\\students.txt");
		
		// Dosya ��eri�ini Okuma
		try {
			Scanner reader = new Scanner(file);
			
			// Okunacak satu�r varsa deva et
			while(reader.hasNextLine()) {
				String line = reader.nextLine();
				System.out.println(line);
			}
			
			//Dosyay� kapat�r
			reader.close();
		}catch(FileNotFoundException e) {
			e.printStackTrace();
		}
		
	}
	
	public static void writeFile() {
		try {
			//Dosyaya Yazmak
			//sona true yazd���m�z i�in �st�ne de�il devam�na yaz�yor
			FileWriter file = new FileWriter("D:\\Github\\BTK-Akademi\\Files\\students.txt", true);
			BufferedWriter writer = new BufferedWriter(file);		
			
			//newLine yeni sat�r olu�tur demektir.
			writer.newLine();
			writer.write("Ahmet");
			
			System.out.println("Dosyaya Yaz�ld�.");
			
			writer.close();
			
		}catch(IOException e) {
			e.printStackTrace();
		}
		
	}

}
