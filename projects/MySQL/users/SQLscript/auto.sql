CREATE TABLE IF NOT EXISTS  autos(
INT id NOT NULL PRIMARY KEY AUTO_INCREMENT,
INT num NOT NULL,
UNIQUE(num),
color CHAR(10) NOT NULL,
INT personnel_id NOT NULL
FOREIGN KEY (personnel_id)
REFERENCES auto_personnel(id)
ON DELETE CASCADE
);

INSERT INTO autos(num, color, personnel_id) VALUES('175', 'white' 2);
INSERT INTO autos(num, color, personnel_id) VALUES('269', 'blue' 3);
INSERT INTO autos(num, color, personnel_id) VALUES('371', 'black' 2);
INSERT INTO autos(num, color, personnel_id) VALUES('486', 'red' 6);
INSERT INTO autos(num, color, personnel_id) VALUES('533', 'black' 5);

SELECT * FROM autos ORDER BY field;