package com.ismailartun00.issuemanagement.dto.concretes;

import java.util.Date;

import com.ismailartun00.issuemanagement.entities.concretes.IssueStatus;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@NoArgsConstructor
@AllArgsConstructor
public class IssueDto {

	private Long id;
	
	private String description;
	
	private String details;
	
	private Date date;
	
	private IssueStatus issueStatus;
	
	private UserDto assignee;
	
	private ProjectDto project;
}
