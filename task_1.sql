select courses.name as course_name,teachers.name as teacher_name from courses inner join teachers on courses.id = teachers.id
select name,ids from (select b.name,count(a.id) ids from courses a inner join teachers b on a.teacher_id=b.id group by b.name) as temp where ids=(select max(ids) from (select b.name,count(a.id) ids from courses a inner join teachers b on a.teacher_id=b.id group by b.name) as temp)
select * from teachers where id not in(select teacher_id from courses)
