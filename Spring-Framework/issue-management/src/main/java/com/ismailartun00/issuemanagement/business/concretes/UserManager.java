package com.ismailartun00.issuemanagement.business.concretes;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;

import com.ismailartun00.issuemanagement.business.abstracts.UserService;
import com.ismailartun00.issuemanagement.dataAccess.abstracts.UserDao;
import com.ismailartun00.issuemanagement.entities.concretes.User;

@Service
public class UserManager implements UserService{
	
	private final UserDao userDao;
	
	public UserManager(UserDao userDao) {
		this.userDao = userDao;
	}

	@Override
	public User save(User user) {
		// Business Logic
		if(user.getEmail() == null) {
			throw new IllegalArgumentException("Username can not be null");
		}
		
		user = userDao.save(user);
		return user;
	}

	@Override
	public User getById(Long id) {
		
		
		
		return userDao.getOne(id);
	}

	@Override
	public Page<User> getAllPageable(Pageable pageable) {


		
		return userDao.findAll(pageable);
	}

	@Override
	public User getByUserName(String userName) {


		
		return userDao.findByUserName(userName);
	}

}
