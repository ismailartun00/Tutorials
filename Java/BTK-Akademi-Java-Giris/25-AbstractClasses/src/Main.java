
public class Main {

	public static void main(String[] args) {
		//abstract s�n�flar new'lenemez.
		GameCalculator gameCalculator = new ManGameCalculator();
		
		gameCalculator.hesapla();
		gameCalculator.gameOver();
		
		WomanGameCalculator womanGameCalculator = new WomanGameCalculator();
		
		womanGameCalculator.hesapla();
		womanGameCalculator.gameOver();
		
		KidsGameCalculator kidsGameCalculator = new KidsGameCalculator();
		
		kidsGameCalculator.hesapla();
		kidsGameCalculator.gameOver();
	}

}
