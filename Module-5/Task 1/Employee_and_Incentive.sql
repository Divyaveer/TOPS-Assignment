show databases;
drop table assignment.employee;
create table assignment.employee (
	employee_id int primary key auto_increment,
	first_name varchar(255),
    last_name varchar(255),
    salary float(255),
    joining_date date,
    department varchar(255)
);

create table assignment.incentive (
	employee_ref_id int,
    incentive_date date,
    incentive float,
    foreign key (employee_ref_id) references assignment.employee(employee_id)
);

insert into assignment.employee(first_name, last_name, salary, joining_date, department) values ("John", "Abraham", 1000000, now(), "Banking"), ("Michel", "Clarke", 80000, now(), "Insurance"), ("Roy", "Thomas", 700000, now(), "Banking"), ("Tom", "Jose", 60000, now(), "Insurance"), ("Jerry", "Pinto", 650000, now(), "Insurance"), ("Philip", "Mathew", 750000, now(), "Services"), ("Testname1", "123", 65000000, now(), "Services"), ("Testname2", "Lname%", 60000000, now(), "Insurance");

insert into assignment.incentive(employee_ref_id, incentive_date, incentive) values (1, now(), 5000), (2, now(), 3000), (3, now(), 4000), (1, now(), 4500), (2, now(), 3500);

select * from assignment.employee where first_name = "tom";
select * from assignment.employee;
select first_name from assignment.employee where first_name = "Tom";
select first_name, joining_date, salary from assignment.employee;
select * from assignment.employee order by first_name asc, salary desc;
select * from assignment.employee where first_name like "j%";

select * from assignment.incentive;

select first_name, incentive from assignment.employee, assignment.incentive where incentive > 3000;