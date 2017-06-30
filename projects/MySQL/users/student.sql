CREATE TABLE IF NOT EXISTS students(
	id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
	age INT NOT NULL,
	fio CHAR(35) NOT NULL,
	group_id INT NOT NULL,
	UNIQUE(fio),
	FOREIGN KEY (group_id)
		REFERENCES groups(id)
		ON DELETE CASCADE
);

SELECT * FROM students;
SELECT * FROM students WHERE id = 3;
SELECT Count(id) FROM students;
SELECT MIN(id) FROM students;
SELECT  * FROM stuents ORDER BY id asc;
DELETE FROM students WHERE age = 19;
DELETE FROM students WHERE id = 1;
DELETE FROM students WHERE group_id = 4;
DELETE FROM students WHERE age = 22;
DELETE FROM students WHERE fio = 'Anton Vladislavovich Smirnov';

UPDATE students SET age = 19 WHERE ID = 2;
UPDATE students SET group_id = 4 WHERE age = 23;
UPDATE students SET fio = 'Anton Vladislavovich Smirnov' WHERE group_id = 2;
UPDATE students SET id = 1 WHERE age = 21;
UPDATE students SET age = 22 WHERE group_id = 5;

INSERT INTO students(age,fio,group_id) VALUES(21, 'Pavel Stepanovich Ivanov', 1);
INSERT INTO students(age,fio,group_id) VALUES(19, 'Maksim Olegovich Gerasimov', 3);
INSERT INTO students(age,fio,group_id) VALUES(24, 'Anton Vladislavovich Smirnov', 2);
INSERT INTO students(age,fio,group_id) VALUES(22, 'Ivan Vladimirovich Popov', 4);
INSERT INTO students(age,fio,group_id) VALUES(23, 'Andrey Fedorovich Dolzhenko', 4);

SELECT * FROM students,groups;
SELECT * FROM groups,students;

SELECT * FROM students, groups WHERE students.group_id = groups.id;
SELECT fio,name FROM students, groups WHERE students.group_id =groups.id;

SELECT * FROM students JOIN groups ON students.group_id = groups.id;
SELECT * FROM groups JOIN students ON students.group_id = groups.id;

SELECT * FROM groups LEFT JOIN students ON students.group_id = groups.id;

Select groups.name, Count(students.id) as 'students' 
FROM groups LEFT JOIN students ON students.group_id = groups.id  
Group by groups.id, groups.name;
