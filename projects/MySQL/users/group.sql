CREATE TABLE IF NOT EXISTS groups (
	id int NOT NULL Primary key AUTO_INCREMENT,
	max int NOT NULL,
	name char(10) NOT NULL,
	sc_name char(15),
	UNIQUE(sc_name, name)
);

INSERT INTO groups(max,name,sc_name) VALUES(20,'11A', '239');
INSERT INTO groups(max,name,sc_name) VALUES(10,'11B', '239');
INSERT INTO groups(max,name,sc_name) VALUES(20,'10A', '239');
INSERT INTO groups(max,name,sc_name) VALUES(30,'10B', '239');

SELECT * FROM groups;