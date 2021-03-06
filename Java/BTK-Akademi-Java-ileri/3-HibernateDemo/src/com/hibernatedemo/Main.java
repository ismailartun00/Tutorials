package com.hibernatedemo;

import java.util.List;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

public class Main {

	public static void main(String[] args) {
		SessionFactory factory = new Configuration().configure("hibernate.cfg.xml").addAnnotatedClass(City.class).buildSessionFactory();
		
		// Unit of Work
		Session session = factory.getCurrentSession();
		
		try {
			session.beginTransaction();
			
			// HQL --> Hibernate Query Language
			// Select * from City
			// from City c where c.countryCode='TUR' AND c.district='Ankara'
			// from City c where c.name= LIKE '%kar%'
			// from City c ORDER BY c.name
			// from City c ORDER BY c.name DESC
			
			// ?sme g?re b?t?n veriyi s?ralay?p b?t?n kolonlar? ?a??rma
			/* List<City> cities = session.createQuery("from City c ORDER BY c.name DESC").getResultList();
			
			for(City city:cities) {
				System.out.println(city.getName());
			} */
			
			// Tek veriyi gruplayarak ?ekmek
			/* List<String> countryCodes = session.createQuery("Select c.countryCode from City c GROUP BY c.countryCode").getResultList();
			
			for(String countryCode : countryCodes) {
				System.out.println(countryCode);
			} */
			
			// INSERT - ?ehir ekleme
			/* City city = new City();
			city.setName("D?zce 10");
			city.setCountryCode("TUR");
			city.setDistrict("Karadeniz");
			city.setPopulation(100000);
			
			session.save(city); */
			
			// UPDATE - 
			/* City city = session.get(City.class, 4086);
			city.setPopulation(110000);
			
			session.save(city); */
			
			// DELETE - 
			City city = session.get(City.class, 4086);
			session.delete(city);
			
			session.getTransaction().commit();
			System.out.println("?ehir Silindi.");
		}finally {
			factory.close();
		}
	}

}
