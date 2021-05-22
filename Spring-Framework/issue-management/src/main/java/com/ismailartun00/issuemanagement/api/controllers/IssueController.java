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

import com.ismailartun00.issuemanagement.business.concretes.IssueManager;
import com.ismailartun00.issuemanagement.dto.concretes.IssueDto;
import com.ismailartun00.issuemanagement.util.ApiPaths;


@RestController
@RequestMapping(ApiPaths.IssueCtrl.CTRL)
public class IssueController {

	private final IssueManager issueManager;

	public IssueController(IssueManager issueManager) {
		this.issueManager = issueManager;
	}

	@GetMapping("/{id}")
	public ResponseEntity<IssueDto> getById(@PathVariable(value = "id", required = true) Long id) {
		IssueDto issueDto = issueManager.getById(id);
		return ResponseEntity.ok(issueDto);
	}
	
	@PostMapping
	public ResponseEntity<IssueDto> createProject(@Valid @RequestBody IssueDto issueDto){
		return ResponseEntity.ok(issueManager.save(issueDto));
	}
	
	@PutMapping("/{id}")
	public ResponseEntity<IssueDto> updateProject (@PathVariable(value = "id", required = true) Long id, @Valid @RequestBody IssueDto issueDto){
		return ResponseEntity.ok(issueManager.update(id, issueDto));
	}
	
	@DeleteMapping("/{id}")
	public ResponseEntity<Boolean> delete(@PathVariable(value = "id", required = true) Long id){
		
		return ResponseEntity.ok(issueManager.delete(id));
	}

}
