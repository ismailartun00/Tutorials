package com.ismailartun00.issuemanagement.business.concretes;

import java.util.Arrays;

import org.modelmapper.ModelMapper;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;

import com.ismailartun00.issuemanagement.business.abstracts.IssueService;
import com.ismailartun00.issuemanagement.dataAccess.abstracts.IssueDao;
import com.ismailartun00.issuemanagement.dto.concretes.IssueDto;
import com.ismailartun00.issuemanagement.entities.concretes.Issue;
import com.ismailartun00.issuemanagement.util.TPage;

@Service
public class IssueManager implements IssueService {
	
	private final IssueDao issueDao;
	private final ModelMapper modelMapper;
	
	public IssueManager(IssueDao issueDao, ModelMapper modelMapper) {
		this.issueDao = issueDao;
		this.modelMapper = modelMapper;
	}

	@Override
	public IssueDto save(IssueDto issueDto) {

		//Business Logic
		if(issueDto.getDate() == null) {
			throw new IllegalArgumentException("Issue date can not be null");
		}
		Issue issueEntity = modelMapper.map(issueDto, Issue.class);
		
		issueEntity =  issueDao.save(issueEntity);
		
		issueDto.setId(issueEntity.getId());
		return issueDto;
	}

	@Override
	public IssueDto getById(Long id) {
		Issue issue = issueDao.getOne(id);
        return modelMapper.map(issue, IssueDto.class);
	}

	@Override
	public TPage<IssueDto> getAllPageable(Pageable pageable) {
		Page<Issue> data = issueDao.findAll(pageable);
        TPage<IssueDto> respnose = new TPage<IssueDto>();
        respnose.setStat(data, Arrays.asList(modelMapper.map(data.getContent(), IssueDto[].class)));
        return respnose;	
	}

	@Override
	public Boolean delete(Long issueId) {
		issueDao.deleteById(issueId);
		return true;
	}

	@Override
	public IssueDto update(Long id, IssueDto issueDto) {
		
		return null;
	}

	

	

}
