package com.ismailartun00.issuemanagement.business.abstracts;

import org.springframework.data.domain.Pageable;

import com.ismailartun00.issuemanagement.dto.concretes.IssueDto;
import com.ismailartun00.issuemanagement.util.TPage;

public interface IssueService {

	IssueDto save(IssueDto issueDto);
	
	IssueDto getById(Long id);
	
	TPage<IssueDto> getAllPageable(Pageable pageable);
	
	Boolean delete(Long issueId);
	
	IssueDto update(Long id, IssueDto issueDto);
}
