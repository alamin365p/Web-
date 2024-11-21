create database bank;
USE bank;
drop database bank;

Create table branch(
Branch_name varchar(50) PRIMARY KEY,
branch_city varchar(50),
Assets int
);
insert into branch values
("kyo", "kyoto", 14),
("mizu", "mizuhara", 17),
("perr", "perryridge", 18),
("toto", "Tokyo", 50);
delete FROM branch;
select * from branch;
Create table customer (
customer_name varchar(50) PRIMARY KEY,
customer_street INT,
customer_city varchar(50)
);
insert into customer values 
("woafi", 1207, "tokyo"),
("suhel", 1205,"tokyo"),
("alamin", 1107, "kyoto");

create table loan (
loan_number INT PRIMARY KEY,
branch_name varchar(50),
ammount INT
);
insert into loan values
(101, "mizu", 5000),
(102, "perr", 7000),
(103, "kyo", 6000);
delete FROM loan;
select * FROM loan;

create table borrower (
customer_name VARCHAR(50) PRIMARY KEY,
loan_number INT
);
insert into borrower values
("woafi", 101),
("alamin", 102);

create table account (
account_number INT PRIMARY KEY,
branch_name VARCHAR(50),
balance INT
);
insert into account values 
(506, "mizu", 10000),
(406, "mizu", 3000),
(508, "toto", 76000),
(706, "kyo", 20000);

create table depositor (
customer_name VARCHAR(50) PRIMARY KEY,
account_number int
);
insert into depositor values
("woafi", 506),
("suhel", 508),
("alamin", 706);


SELECT *
FROM customer as c
INNER JOIN Depositor as D 
ON D.customer_name = c.customer_name
WHERE D.customer_name NOT IN 
(select customer_name from Borrower);

DELETE FROM loan WHERE ammount BETWEEN 5000 AND 7000;

SELECT customer_name 
FROM customer 
WHERE customer_name IN 
(SELECT customer_name FROM Borrower 
WHERE loan_number IN
(SELECT loan_number FROM loan WHERE branch_name = "perr"));










