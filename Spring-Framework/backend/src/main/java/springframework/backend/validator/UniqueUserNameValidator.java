package springframework.backend.validator;

import javax.validation.ConstraintValidator;
import javax.validation.ConstraintValidatorContext;

import lombok.RequiredArgsConstructor;
import springframework.backend.repository.UserRepository;

@RequiredArgsConstructor
public final class UniqueUserNameValidator implements ConstraintValidator<UniqueUserName, String> {
	
	private final UserRepository userRepository;

	@Override
	public boolean isValid(String username, ConstraintValidatorContext context) {
		
		return !userRepository.existsUserByUsername(username);
	}

}
