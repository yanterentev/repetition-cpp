CREATE TABLE IF NOT EXISTS  auto_personnels(
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	first_name CHAR(10) NOT NULL,
	last_name CHAR(10) NOT NULL,
	pather_name CHAR(10) NOT NULL  
);
INSERT INTO auto_personnels(first_name, last_name, pather_name) VALUES('Ivan', 'Valerievich', 'Smirnov');
INSERT INTO auto_personnels(first_name, last_name, pather_name) VALUES('Gleb', 'Nikitovich', 'Romanov');
INSERT INTO auto_personnels(first_name, last_name, pather_name) VALUES('Roman', 'Valentinovich', 'Andreev');
INSERT INTO auto_personnels(first_name, last_name, pather_name) VALUES('Miron', 'Maksimovich', 'Kazakov');
INSERT INTO auto_personnels(first_name, last_name, pather_name) VALUES('Fedor', 'Andreevich', 'Gerasimov');

SELECT last_name ORDER BY /* пока что незнаю как:(*/