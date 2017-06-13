CREATE TABLE IF NOT EXISTS routes (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
	name CHAR(50) NOT NULL,
	UNIQUE(name)
);

INSERT INTO routes(name) VALUES('Saint-Petersburg - Moscow');
INSERT INTO routes(name) VALUES('Kaliningrad - Vladivostok');
INSERT INTO routes(name) VALUES('Arhangelsk - Sochi');
INSERT INTO routes(name) VALUES('Moscow - Krakow');
INSERT INTO routes(name) VALUES('Krakow - Saint-Petersburg');

/* 4 задание(с ошибкой при запуске)*/
/*SELECT name FROM routes, journals WHERE time_in = CURRENT_TIMESTAMP;
/*5 задание*/
select time_out, name from journals, routes;
/*6 задание*/
select time_in, name, num from journals, routes, autos;
