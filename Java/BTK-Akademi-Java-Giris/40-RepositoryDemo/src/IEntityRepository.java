// generic constraints - generik k�s�t
public interface IEntityRepository<T extends IEntity> {
	void add(T entity);
	void delete(T entity);
	void update(T entity);
}
