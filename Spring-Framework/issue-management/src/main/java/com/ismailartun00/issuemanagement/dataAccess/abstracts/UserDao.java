package com.ismailartun00.issuemanagement.dataAccess.abstracts;

import org.springframework.data.jpa.repository.JpaRepository;

import com.ismailartun00.issuemanagement.entities.concretes.User;

public interface UserDao extends JpaRepository<User, Long> {
	User findByUserName(String userName);
}
