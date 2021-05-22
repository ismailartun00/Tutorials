package com.ismailartun00.issuemanagement.business.concretes;

import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;

import com.ismailartun00.issuemanagement.business.abstracts.IssueHistoryService;
import com.ismailartun00.issuemanagement.dataAccess.abstracts.IssueHistoryDao;
import com.ismailartun00.issuemanagement.entities.concretes.IssueHistory;

@Service
public class IssueHistoryManager implements IssueHistoryService {
	
	private final IssueHistoryDao issueHistoryDao;
	
	public IssueHistoryManager(IssueHistoryDao issueHistoryDao) {
		this.issueHistoryDao = issueHistoryDao;
	}

	@Override
	public IssueHistory save(IssueHistory issueHistory) {
		// Business Logic
		if(issueHistory.getDate() == null) {
			throw new IllegalArgumentException("Issue can not be null");
		}
		
		issueHistory = issueHistoryDao.save(issueHistory);
		return issueHistory;
	}

	@Override
	public IssueHistory getById(Long id) {


		
		return issueHistoryDao.getOne(id);
	}

	@Override
	public Page<IssueHistory> getAllPageable(Pageable pageable) {
		
		
		
		return issueHistoryDao.findAll(pageable);
	}

	@Override
	public Boolean delete(IssueHistory issueHistory) {

		issueHistoryDao.delete(issueHistory);
		
		return Boolean.TRUE;
	}

}
