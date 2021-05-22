package com.ismailartun00.issuemanagement.dataAccess.abstracts;

import org.springframework.data.jpa.repository.JpaRepository;

import com.ismailartun00.issuemanagement.entities.concretes.IssueHistory;

public interface IssueHistoryDao extends JpaRepository<IssueHistory, Long> {

}
