package springframework.backend.dto;

import java.io.Serializable;

import lombok.Getter;
import springframework.backend.model.User;

@Getter
public final class UserViewDTO implements Serializable {

	private static final long serialVersionUID = 1L;
	
	private final String firstName;
	private final String lastName;
	
	private UserViewDTO(String firstName, String lastName) {
		this.firstName = firstName;
		this.lastName = lastName;
	}
	
	public static UserViewDTO of(User user) {
		return new UserViewDTO(user.getFirstName(), user.getLastName());
	}

}
