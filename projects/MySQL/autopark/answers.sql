 /*файл с ответами*/

/* вывод ФИО персонала, упорядоченный по фамилии*/
SELECT last_name, first_name, pather_name FROM auto_personnels ORDER BY last_name;
SELECT last_name, first_name, pather_name FROM auto_personnels ORDER BY first_name DESC;
/*вывод номеров автомбилей принадлежащих водителю с заданной фамилией*/
SELECT num FROM autos JOIN auto_personnels ON auto_personnels.id = personnel_id WHERE last_name = 'Romanov';
/*подсчет количества машин с номером начинающимся на р*/
SELECT Count(id) FROM autos WHERE ASCII(num) = 112;
/*вывод имен рейсов где есть не вернувшиеся автомобили*/
SELECT name from routes WHERE time_in > CURRENT_TIMESTAMP;
/*вывод времени отправки и имен маршрутов*/
SELECT time_out, name FROM journals JOIN routes ON journals.id = routes.id;
/* вывод времен прибытия, имен маршрутов и номеров автомобилей.*/
SELECT time_in, name, num FROM journals 
JOIN rotes ON journals.id = routes.id
JOIN autos ON routes.id = autos.id;
