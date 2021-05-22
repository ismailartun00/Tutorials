package com.ismailartun00.issuemanagement.entities.concretes;

import java.io.Serializable;
import java.util.Date;

import javax.persistence.Column;
import javax.persistence.MappedSuperclass;
import javax.persistence.Temporal;
import javax.persistence.TemporalType;

import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@MappedSuperclass		// diğer class'lardan extend edilebilir.
public abstract class BaseEntity implements Serializable {

	
	private static final long serialVersionUID = 1L;
	
	@Temporal(TemporalType.TIMESTAMP)
	@Column(name = "created_at")
	private Date createdAt;
	
	@Column(name = "created_by", length = 50)
	private String createdBy;
	
	@Temporal(TemporalType.TIMESTAMP)
	@Column(name = "updated_at")
	private Date updatedAt;
	
	@Column(name = "updated_by", length = 50)
	private String updatedBy;
	
	@Column(name = "status")
	private Boolean status;
}
