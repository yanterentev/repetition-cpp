CREATE TABLE IF NOT EXISTS autos(
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	CHAR num(6) NOT NULL,
	color CHAR(10) NOT NULL
	INT personnel_id NOT NULL,
	UNIQUE(num),
FOREIGN KEY (personnel_id)
REFERENCES auto_personnel(id)
ON DELETE CASCADE
);

INSERT INTO autos(num, color, personnel_id) VALUES('po175d', 'white' 2);
INSERT INTO autos(num, color, personnel_id) VALUES('sd269w', 'blue' 3);
INSERT INTO autos(num, color, personnel_id) VALUES('xc371r', 'black' 2);
INSERT INTO autos(num, color, personnel_id) VALUES('kt465y', 'red' 6);
INSERT INTO autos(num, color, personnel_id) VALUES('ot533o', 'black' 5);