/*show all auto_personnels*/
Select * from auto_personnels;

/*show all routes*/
Select * from routes;

/*show all autos*/
Select * from autos;

/*show all journals*/
Select * from journals;

/*show autos with personnels*/
Select * from autos inner join auto_personnels on autos.personnel_id = auto_personnels.id;