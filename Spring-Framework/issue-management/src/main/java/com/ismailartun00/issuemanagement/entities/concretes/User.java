package com.ismailartun00.issuemanagement.entities.concretes;

import java.util.List;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.OneToMany;
import javax.persistence.Table;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.EqualsAndHashCode;
import lombok.NoArgsConstructor;
import lombok.ToString;

@Entity
@Data
@NoArgsConstructor
@AllArgsConstructor
@ToString
@EqualsAndHashCode
@Table(name = "users")
public class User {

	@Id
	@GeneratedValue(strategy = GenerationType.AUTO)
	private Long id;
	
	@Column(name = "user_name", length = 100, unique = true)
	private String userName;
	
	@Column(name = "password", length = 200)
	private String password;
	
	@Column(name = "name_surname", length = 200)
	private String nameSurname;
	
	@Column(name = "email", length = 100)
	private String email;
	
	@JoinColumn(name = "assignee_user_id")
	@OneToMany(fetch = FetchType.LAZY)
	private List<Issue> issues;
}
