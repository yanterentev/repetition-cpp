CREATE TABLE IF NOT EXISTS routes (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	name CHAR(50) NOT NULL,
	UNIQUE(name)
);

CREATE TABLE IF NOT EXISTS auto_personnels (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	first_name CHAR(8) NOT NULL,
	last_name CHAR(30) NOT NULL,
	pather_name CHAR(30) NOT NULL,
	UNIQUE(first_name, last_name, pather_name)  
);

CREATE TABLE IF NOT EXISTS autos (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	num CHAR(6) NOT NULL,
	color CHAR(10) NOT NULL,
	personnel_id INT NOT NULL,
	UNIQUE(num),
	FOREIGN KEY (personnel_id)
	REFERENCES auto_personnels(id)
	ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS journals (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	time_out TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
	time_in TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
	auto_id INT NOT NULL,
	route_id INT NOT NULL,
	FOREIGN KEY (route_id)
	REFERENCES routes(id)
	ON DELETE CASCADE,
	FOREIGN KEY (auto_id)
	REFERENCES autos(id)
	ON DELETE CASCADE
);