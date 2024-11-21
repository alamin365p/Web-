create database employee;
USE bank;
drop database bank;

Create table employee(
employee_id int PRIMARY KEY,
employee_name varchar(50),
street int,
city varchar(20)
);
insert into employee values
(101,"Woafi", 017, "nework"),
(102, "Alamin", 012, "Tokyo"),
(103, "Bob", 011, "Kyoto"),
(104, "Snow", 330, "Kyoto"),
(105, "alpa", 340, "Tokyo"),
(106, "Bing", 501, "Nework");

Create table Works (
employee_id int PRIMARY KEY,
company_name varchar(50),
salary int
);
insert into Works values 
(101,"Keya", 20000),
(102, "Keya", 22000),
(103, "Mil", 25000),
(104, "Mil", 19000),
(105, "Flod", 20000),
(106, "Mil", 22000);

create table company (
company_name varchar(50),
city varchar(50)
);
insert into company values
("Keya", "nework"),
("Mil", "Tokyo"),
("Flod", "Kyoto"),
("voca", "Dhaka");
create table manager (
employee_id int PRIMARY KEY,
manager_name varchar(50)
);
insert into manager values
(101,"Tanim"),
(102,"Tanim"),
(103, "Rahim");










