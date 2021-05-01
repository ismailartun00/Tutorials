
public class CustomerManager {
	private ICustomerDal customerDal;
	
	public CustomerManager(ICustomerDal customerDal) {
		this.customerDal = customerDal;
	}
	
	public void add() {
		// �� Kodlar� Yaz�l�r
		customerDal.Add();
	}
}
