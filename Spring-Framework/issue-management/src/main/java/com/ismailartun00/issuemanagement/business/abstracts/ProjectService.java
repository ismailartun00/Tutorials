package com.ismailartun00.issuemanagement.business.abstracts;

import java.util.List;

import org.springframework.data.domain.Pageable;

import com.ismailartun00.issuemanagement.dto.concretes.ProjectDto;
import com.ismailartun00.issuemanagement.util.TPage;

public interface ProjectService {

	ProjectDto save(ProjectDto project);
	
	ProjectDto getById(Long id);
	
	ProjectDto getByProjectCode(String projectCode);
	
	List<ProjectDto> getByProjectCodeContains(String projectCode);
	
	TPage<ProjectDto> getAllPageable(Pageable pageable);
	
	Boolean delete (ProjectDto project);
	
	ProjectDto update(Long id, ProjectDto projectDto);
}
