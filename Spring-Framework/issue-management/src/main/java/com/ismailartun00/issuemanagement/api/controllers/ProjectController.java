package com.ismailartun00.issuemanagement.api.controllers;

import javax.validation.Valid;

import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.ismailartun00.issuemanagement.business.concretes.ProjectManager;
import com.ismailartun00.issuemanagement.dto.concretes.ProjectDto;
import com.ismailartun00.issuemanagement.util.ApiPaths;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;

@RestController
@RequestMapping(ApiPaths.ProjectCtrl.CTRL)
@Api(value = "Project APIs")
public class ProjectController {

	private final ProjectManager projectManager;

	public ProjectController(ProjectManager projectManager) {
		this.projectManager = projectManager;
	}

	@GetMapping("/{id}")
	@ApiOperation(value = "Get By Id Operation", response = ProjectDto.class)
	public ResponseEntity<ProjectDto> getById(@PathVariable(value = "id", required = true) Long id) {
		ProjectDto projectDto = projectManager.getById(id);
		return ResponseEntity.ok(projectDto);
	}
	
	@PostMapping
	@ApiOperation(value = "Create Operation", response = ProjectDto.class)
	public ResponseEntity<ProjectDto> createProject(@Valid @RequestBody ProjectDto projectDto){
		return ResponseEntity.ok(projectManager.save(projectDto));
	}
	
	@PutMapping("/{id}")
	@ApiOperation(value = "Update Operation", response = ProjectDto.class)
	public ResponseEntity<ProjectDto> updateProject (@PathVariable(value = "id", required = true) Long id, @Valid @RequestBody ProjectDto projectDto){
		return ResponseEntity.ok(projectManager.update(id, projectDto));
	}
	
	@DeleteMapping("/{id}")
	@ApiOperation(value = "Delete Operation", response = Boolean.class)
	public ResponseEntity<Boolean> delete(@PathVariable(value = "id", required = true) Long id){
		
		return ResponseEntity.ok(projectManager.delete(id));
	}

}
