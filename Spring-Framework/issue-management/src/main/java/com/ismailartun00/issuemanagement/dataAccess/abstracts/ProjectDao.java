package com.ismailartun00.issuemanagement.dataAccess.abstracts;

import java.util.List;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.data.domain.Sort;
import org.springframework.data.jpa.repository.JpaRepository;

import com.ismailartun00.issuemanagement.entities.concretes.Project;

public interface ProjectDao extends JpaRepository<Project, Long> {

	Project getByProjectCode (String projectCode);
	
	Project getByProjectCodeAndIdNot(String projectCode, Long id);
	
	List<Project> getByProjectCodeContains (String projectCode);
	
	Page<Project> findAll (Pageable pageable);
	
	List<Project> findAll(Sort sort);
}
