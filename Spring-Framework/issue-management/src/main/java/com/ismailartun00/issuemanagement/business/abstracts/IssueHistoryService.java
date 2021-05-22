package com.ismailartun00.issuemanagement.business.abstracts;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;

import com.ismailartun00.issuemanagement.entities.concretes.Issue;
import com.ismailartun00.issuemanagement.entities.concretes.IssueHistory;

public interface IssueHistoryService {

	IssueHistory save(IssueHistory issueHistory);
	
	IssueHistory getById(Long id);
	
	Page<IssueHistory> getAllPageable(Pageable pageable);
	
	Boolean delete(IssueHistory issueHistory);
}
