
CREATE TABLE IF NOT EXISTS auto_personnels (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	first_name CHAR(8) NOT NULL,
	last_name CHAR(15) NOT NULL,
	pather_name CHAR(10) NOT NULL,
	UNIQUE(first_name, last_name, pather_name)  
);
INSERT INTO auto_personnels(first_name, pather_name, last_name) VALUES('Ivan', 'Valerievich', 'Smirnov');
INSERT INTO auto_personnels(first_name, pather_name, last_name) VALUES('Gleb', 'Nikitovich', 'Romanov');
INSERT INTO auto_personnels(first_name, pather_name, last_name) VALUES('Roman', 'Valentinovich', 'Andreev');
INSERT INTO auto_personnels(first_name, pather_name, last_name) VALUES('Miron', 'Maksimovich', 'Kazakov');
INSERT INTO auto_personnels(first_name, pather_name, last_name) VALUES('Fedor', 'Andreevich', 'Gerasimov');

/*1 задание*/
SELECT last_name FROM auto_personnels ORDER BY last_name;
SELECT last_name FROM auto_personnels ORDER BY first_name DESC;