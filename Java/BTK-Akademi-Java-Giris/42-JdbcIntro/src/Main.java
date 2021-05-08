import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;

public class Main {
	
	public static void main(String[] args) throws SQLException{
		deleteData();
	}
	
	public static void selectDemo() throws SQLException {
		Connection connection = null;
		DbHelper helper = new DbHelper();
		Statement statement = null;
		ResultSet resultSet;
		
		try {
			connection = helper.getConnection();
			statement = connection.createStatement();
			resultSet = statement.executeQuery("select Code, Name, Continent, Region from country");
			ArrayList<Country> countries = new ArrayList<Country>();
			while(resultSet.next()) {
				countries.add(new Country(
						resultSet.getString("Code"), 
						resultSet.getString("Name"), 
						resultSet.getString("Continent"), 
						resultSet.getString("Region")
						));
				
			}
			System.out.println(countries.size());
		}catch(SQLException exception) {
			helper.showErrorMessage(exception);
		}finally {
			connection.close();
		}
	}
	
	public static void insertDemo() throws SQLException {
		Connection connection = null;
		DbHelper helper = new DbHelper();
		PreparedStatement statement = null;
		
		try {
			connection = helper.getConnection();
			String sql = "insert into city(Name, CountryCode, District, Population) values(?, ?, ?, ?)";
			statement = connection.prepareStatement(sql);
			statement.setString(1, "Düzce 2");
			statement.setString(2, "TUR");
			statement.setString(3, "Turkey");
			statement.setInt(4, 7000);
			int result = statement.executeUpdate();
			System.out.println("Kayýt Eklendi.");
		}catch(SQLException exception) {
			helper.showErrorMessage(exception);
		}finally {
			statement.close();
			connection.close();
		}
	}
	
	public static void updateData() throws SQLException{
		Connection connection = null;
		DbHelper helper = new DbHelper();
		PreparedStatement statement = null;
		
		try {
			connection = helper.getConnection();
			String sql = "update city set population=100000, district='Düzce' where id = ?";
			statement = connection.prepareStatement(sql);
			statement.setInt(1, 4082);
			int result = statement.executeUpdate();
			System.out.println("Kayýt Güncellendi.");
		}catch(SQLException exception) {
			helper.showErrorMessage(exception);
		}finally {
			statement.close();
			connection.close();
		}
	}
	
	public static void deleteData() throws SQLException{
		Connection connection = null;
		DbHelper helper = new DbHelper();
		PreparedStatement statement = null;
		
		try {
			connection = helper.getConnection();
			String sql = "delete from city where id = ?";
			statement = connection.prepareStatement(sql);
			statement.setInt(1, 4082);
			int result = statement.executeUpdate();
			System.out.println("Kayýt Silindi.");
		}catch(SQLException exception) {
			helper.showErrorMessage(exception);
		}finally {
			statement.close();
			connection.close();
		}
	}

}
