package com.ismailartun00.issuemanagement.dataAccess.abstracts;

import org.springframework.data.jpa.repository.JpaRepository;

import com.ismailartun00.issuemanagement.entities.concretes.Issue;

public interface IssueDao extends JpaRepository<Issue, Long> {

}
