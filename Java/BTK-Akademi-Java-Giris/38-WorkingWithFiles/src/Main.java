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
		
		// Yeni Dosya Oluþturma
		try {
			if(file.createNewFile()) {
				System.out.println("Dosya Oluþturuldu.");
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
			System.out.println("Dosya Adý : " + file.getName());
			System.out.println("Dosyanýn Yolu : " + file.getAbsolutePath());
			System.out.println("Dosya Yazýlabilir mi : " + file.canWrite());
			System.out.println("Dosya Okunabilir mi : " + file.canRead());
			System.out.println("Dosya Boyutu(byte) : " + file.length());
		}
	}
	
	public static void readFile() {
		File file = new File("D:\\Github\\BTK-Akademi\\Files\\students.txt");
		
		// Dosya Ýçeriðini Okuma
		try {
			Scanner reader = new Scanner(file);
			
			// Okunacak satuýr varsa deva et
			while(reader.hasNextLine()) {
				String line = reader.nextLine();
				System.out.println(line);
			}
			
			//Dosyayý kapatýr
			reader.close();
		}catch(FileNotFoundException e) {
			e.printStackTrace();
		}
		
	}
	
	public static void writeFile() {
		try {
			//Dosyaya Yazmak
			//sona true yazdýðýmýz için üstüne deðil devamýna yazýyor
			FileWriter file = new FileWriter("D:\\Github\\BTK-Akademi\\Files\\students.txt", true);
			BufferedWriter writer = new BufferedWriter(file);		
			
			//newLine yeni satýr oluþtur demektir.
			writer.newLine();
			writer.write("Ahmet");
			
			System.out.println("Dosyaya Yazýldý.");
			
			writer.close();
			
		}catch(IOException e) {
			e.printStackTrace();
		}
		
	}

}
