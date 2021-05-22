package com.ismailartun00.issuemanagement.business.abstracts;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;

import com.ismailartun00.issuemanagement.entities.concretes.Issue;
import com.ismailartun00.issuemanagement.entities.concretes.User;

public interface UserService {

	User save(User user);
	
	User getById(Long id);
	
	Page<User> getAllPageable(Pageable pageable);
	
	User getByUserName(String userName);
}
