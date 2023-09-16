show databases;
create database assignment;
drop database assignment;

select assignment;

create table assignment.student (
	`Roll No` int primary key auto_increment,
    name varchar(255),
    branch varchar(255)
);

create table assignment.exam (
		`Roll No` int,
		S_code varchar(255),
        marks int,
        P_code varchar(255),
        foreign key (`Roll No`) references assignment.student(`Roll No`)
);

insert into assignment.student(name, branch) values ("Divyaveer", "Computer Science"), ("Neet", "Electronic and Computer"), ("Jatin", "Electronic and Computer");
insert into assignment.student(name, branch) values ("Paras", "Web Developer");
insert into assignment.student(name, branch) values ("Karan", "Web Developer");

insert into assignment.exam(`Roll No`, S_code, marks, P_code) values (1, "CS11", 95, "CS"), (1, "CS12", 65, "CS"), (2, "EC101", 65, "EC"), (2, "EC102", 70, "EC"), (3, "EC101", 90, "EC"), (3, "EC102", 86, "EC");
insert into assignment.exam(`Roll No`, S_code, marks, P_code) values (4, "EC101", 45, "EC"), (4, "EC102", 78, "EC");

update assignment.exam set S_code = "WD11" , P_code = "WD" where `Roll No` = 4;

select * from assignment.student;

select * from assignment.exam;
select * from assignment.student left join assignment.exam on assignment.exam.`Roll No` = assignment.student.`Roll No`;
select * from assignment.student right join assignment.exam on assignment.exam.`Roll No` = assignment.student.`Roll No`;
select * from assignment.student inner join assignment.exam on assignment.exam.`Roll No` = assignment.student.`Roll No`;