CREATE TABLE IF NOT EXISTS Users (
	id INT Primary Key Not Null Auto_Increment,
	username Char(50)
);

Insert into Users(username) Values('user1');
Insert into Users(username) Values('user2');
Insert into Users(username) Values('user3');
Insert into Users(username) Values('user4');

Select * From Users;