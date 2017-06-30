INSERT INTO routes(name) VALUES('Saint-Petersburg - Moscow');
INSERT INTO routes(name) VALUES('Kaliningrad - Vladivostok');
INSERT INTO routes(name) VALUES('Arhangelsk - Sochi');
INSERT INTO routes(name) VALUES('Moscow - Krakow');
INSERT INTO routes(name) VALUES('Krakow - Saint-Petersburg');

INSERT INTO auto_personnels(first_name, pather_name, last_name) 
VALUES('Ivan', 'Valerievich', 'Smirnov');
INSERT INTO auto_personnels(first_name, pather_name, last_name) 
VALUES('Gleb', 'Nikitovich', 'Romanov');
INSERT INTO auto_personnels(first_name, pather_name, last_name) 
VALUES('Roman', 'Valentinovich', 'Andreev');
INSERT INTO auto_personnels(first_name, pather_name, last_name) 
VALUES('Miron', 'Maksimovich', 'Kazakov');
INSERT INTO auto_personnels(first_name, pather_name, last_name) 
VALUES('Fedor', 'Andreevich', 'Gerasimov');

INSERT INTO autos(num, color, personnel_id) VALUES('po175d', 'white', 2);
INSERT INTO autos(num, color, personnel_id) VALUES('sd269w', 'yellow', 3);
INSERT INTO autos(num, color, personnel_id) VALUES('xc371r', 'black', 2);

INSERT INTO journals(time_out, time_in, auto_id, route_id)
VALUES('2013-08-05 18:15', '2013-08-05 23:00', 1, 4);
INSERT INTO journals(time_out, time_in, auto_id, route_id) 
VALUES('2015-02-28 23:00', '2018-03-01 05:00', 3, 2);
INSERT INTO journals(time_out, time_in, auto_id, route_id) 
VALUES('2014-07-11 22:30', '2018-07-12 03:15', 2, 5);