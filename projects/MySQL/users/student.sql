CREATE TABLE IF NOT EXISTS students(
	id INT PRIMARY KEY NOT NULL AUTO_INCREMENT,
	age INT NOT NULL,
	fio CHAR(35) NOT NULL,
	group_number INT NOT NULL
);

INSERT INTO students(age,fio,group_number) VALUES(21, 'Pavel Stepanovich Ivanov', 1);
INSERT INTO students(age,fio,group_number) VALUES(19, 'Maksim Olegovich Gerasimov', 3);
INSERT INTO students(age,fio,group_number) VALUES(24, 'Anton Vladislavovich Smirnov', 2);
INSERT INTO students(age,fio,group_number) VALUES(22, 'Ivan Vladimirovich Popov', 5);
INSERT INTO students(age,fio,group_number) VALUES(23, 'Andrey Fedorovich Dolzhenko', 4);
SELECT * FROM students;
SELECT * FROM students WHERE id = 3;
SELECT Count(id) FROM students;
SELECT MIN(id) FROM students;
SELECT  * FROM stuents ORDER BY id asc;
DELETE FROM students WHERE age = 19;
DELETE FROM students WHERE id = 1;
DELETE FROM students WHERE group_number = 4;
DELETE FROM students WHERE age = 22;
DELETE FROM students WHERE fio = 'Anton Vladislavovich Smirnov';
UPDATE students SET age = 19 WHERE ID = 2;
UPDATE students SET group_number = 4 WHERE age = 23;
UPDATE students SET fio = 'Anton Vladislavovich Smirnov' WHERE group_number = 2;
UPDATE students SET id = 1 WHERE age = 21;
UPDATE students SET age = 22 WHERE group_number = 5;