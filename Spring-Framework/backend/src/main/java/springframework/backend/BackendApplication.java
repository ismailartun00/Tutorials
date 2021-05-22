package springframework.backend;

import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.autoconfigure.security.servlet.SecurityAutoConfiguration;
import org.springframework.context.annotation.Bean;

import springframework.backend.dto.UserCreateDTO;
import springframework.backend.service.UserService;

// security kısmını devre dışı bıraktık parantez içinde.
@SpringBootApplication(exclude = SecurityAutoConfiguration.class)
public class BackendApplication {

	public static void main(String[] args) {
		SpringApplication.run(BackendApplication.class, args);
	}

	@Bean
	CommandLineRunner createInitialUsers(UserService userService) {
		return (args) -> {
			UserCreateDTO user = new UserCreateDTO();
			user.setUserName("User1");
			user.setFirstName("İsmail");
			user.setLastName("Artun");
			
			userService.createUser(user);
			
			UserCreateDTO user2 = new UserCreateDTO();
			user2.setUserName("User2");
			user2.setFirstName("Osman");
			user2.setLastName("Artun2");
			
			userService.createUser(user);
			
			UserCreateDTO user3 = new UserCreateDTO();
			user3.setUserName("User3");
			user3.setFirstName("Başak");
			user3.setLastName("Artun3");
			
			userService.createUser(user);
		};
	}
}
