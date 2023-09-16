show databases;
create table assignment.salesperson (
	sno int primary key auto_increment not null,
    sname varchar(255),
    city varchar(255),
	comm float
);

create table assignment.customer (
	cnm int not null primary key auto_increment,
	cname varchar(255),
	city varchar(255),
    rating varchar(255),
    sno int,
    foreign key (sno) references assignment.salesperson(sno)
);

alter table assignment.customer
change column `rating` `rating` int;

insert into assignment.salesperson (sname, city, comm) values ("Peel", "London", .12), ("Serres", "San Jose", .13), ("motika", "London", .11), ("Rafkin", "Barcelona", .15), ("Axeirod", "New York", .1);

insert into assignment.customer (cname, city, rating, sno) values ("Hoffman", "London", 100, 1), ("Giovanne", "Roe", 200, 3), ("Liu", "San Jose", 300, 2), ("Grass", "Barcelona", 100, 2), ("Clemens", "London", 300, 5), ("Pereira", "Roe", 100, 4);

select * from assignment.salesperson;
select sname, city from assignment.salesperson where city = "London" and comm > .12;
select * from assignment.salesperson where city = "Barcelona" or city = "London";
select * from assignment.salesperson where comm > .10 and comm < .12;
select * from assignment.salesperson where not comm <= 100 or city = "Roe";

select * from assignment.customer;