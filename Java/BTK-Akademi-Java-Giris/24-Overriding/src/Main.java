
public class Main {

	public static void main(String[] args) {
		// final kelimesini metodu tan?mlarken yazarsak override edilme ?zelli?ini kald?r?r?z.
		
		BaseKrediManager[] krediManagers = new BaseKrediManager[] { new OgretmenKrediManager(), new Tar?mKrediManager(), new OgrenciKrediManager() };
		
		for(BaseKrediManager krediManager : krediManagers) {
			System.out.println(krediManager.hesapla(1000));
		}
	}

}
