import java.util.ArrayList;

public class Main {

	public static void main(String[] args) {
		ArrayList<Customer> customers = new ArrayList<Customer>();
		
		Customer engin = new Customer(1,"Engin", "Demiro�");
		
		customers.add(engin);
		customers.add(new Customer(2,"Derin", "Demiro�"));
		customers.add(new Customer(3,"Salih", "Demiro�"));
		
		customers.remove(engin);
		
		for(Customer customer : customers) {
			System.out.println(customer.firstName);
		}
		
		
	}

}
