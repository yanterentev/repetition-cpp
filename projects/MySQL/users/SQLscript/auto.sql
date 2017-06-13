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

INSERT INTO autos(num, color, personnel_id) VALUES('po175d', 'white', 2);
INSERT INTO autos(num, color, personnel_id) VALUES('sd269w', 'yellow', 3);
INSERT INTO autos(num, color, personnel_id) VALUES('xc371r', 'black', 2);

/*второе задание*/
SELECT num FROM autos, auto_personnels WHERE last_name = 'Romanov';
/*третье задание(не доделано)*/
/*SELECT Count(id) FROM autos WHERE num(1) = 'p';*/
/*9 задание*/
insert into autos(num, color, personnel_id) values('as386f', 'yellow', 1 );
insert into autos(num, color, personnel_id) values('as386f', 'yellow', 1 );