package com.ismailartun00.issuemanagement.business.concretes;

import java.util.Arrays;
import java.util.List;

import org.modelmapper.ModelMapper;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;

import com.ismailartun00.issuemanagement.business.abstracts.ProjectService;
import com.ismailartun00.issuemanagement.dataAccess.abstracts.ProjectDao;
import com.ismailartun00.issuemanagement.dto.concretes.ProjectDto;
import com.ismailartun00.issuemanagement.entities.concretes.Project;
import com.ismailartun00.issuemanagement.util.TPage;

@Service
public class ProjectManager implements ProjectService {

	private final ProjectDao projectDao;
	private final ModelMapper modelMapper;

	public ProjectManager(ProjectDao projectDao, ModelMapper modelMapper) {
		this.projectDao = projectDao;
		this.modelMapper = modelMapper;
	}

	@Override
	public ProjectDto save(ProjectDto projectDto) {
		// Business Logic
		Project projectCheck = projectDao.getByProjectCode(projectDto.getProjectCode());

		if (projectCheck != null) {
			throw new IllegalArgumentException("Project code already exist");
		}

		Project p = modelMapper.map(projectDto, Project.class);
		p = projectDao.save(p);
		projectDto.setId(p.getId());
		return projectDto;
	}

	@Override
	public ProjectDto getById(Long id) {

		Project p = projectDao.getOne(id);
		return modelMapper.map(p, ProjectDto.class);
	}

	@Override
	public ProjectDto getByProjectCode(String projectCode) {

		return null;
	}

	@Override
	public List<ProjectDto> getByProjectCodeContains(String projectCode) {

		return null;
	}

	@Override
	public TPage<ProjectDto> getAllPageable(Pageable pageable) {
		Page<Project> data = projectDao.findAll(pageable);
		TPage<ProjectDto> respnose = new TPage<ProjectDto>();
		respnose.setStat(data, Arrays.asList(modelMapper.map(data.getContent(), ProjectDto[].class)));
		return respnose;
	}

	@Override
	public Boolean delete(ProjectDto project) {
		
		return null;
	}
	
	public Boolean delete(Long id) {
		
		projectDao.deleteById(id);
		
		return true;
	}

	@Override
	public ProjectDto update(Long id, ProjectDto projectDto) {
		Project projectDb = projectDao.getOne(id);
		if(projectDb == null) {
			throw new IllegalArgumentException("Project does not exist ID:" + id);
		}
		
		Project projectCheck = projectDao.getByProjectCodeAndIdNot(projectDto.getProjectCode(), id);
		if (projectCheck != null) {
			throw new IllegalArgumentException("Project code already exist");
		}

		projectDb.setProjectCode(projectDto.getProjectCode());
		projectDb.setProjectName(projectDto.getProjectName());
		
		projectDao.save(projectDb);
		return modelMapper.map(projectDb, ProjectDto.class);
	}

}
