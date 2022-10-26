create database query1;
use query1;
create table salesman(salesman_id char(4) NOT null,
name varchar(255),
city varchar(255),
commission decimal,
primary key(salesman_id));
insert into salesman values('5001','James Hoog','New York','1.15');
insert into salesman values('5002','Albert Sharma','Paris','2.15');
insert into salesman values('5003','Shubham','London','3.15');
insert into salesman values('5005','Himanshu','Paris','4.15');
insert into salesman values('5006','Sahil Sood','New York','5.15');
insert into salesman values('5007','Pukhraj','Rome','6.15');
create table customer(customer_id char(4) NOT NULL,
customer_name varchar(255),
city varchar(255),
grade int,
salesman_id char(4),
primary key (customer_id),
foreign key(salesman_id) references salesman(salesman_id));
insert into customer values('3002','Jodi','New York','100','5001');
insert into customer values('3005','mehrashi','California','200','5002');
insert into customer values('3001','Bhriguraj','London','100','5001');
insert into customer values('3004','Arjun','Paris','300','5006');
insert into customer values('3007','Dev','New York','200','5001');
insert into customer values('3009','ramnath','Berlin','100','5001');
insert into customer values('3008','sanchi','London','300','5002');
insert into customer values('3003','jat','Moncow','200','5007');
create table orders(order_no char(5) NOT NULL,
purch_amt int,
order_date DATE,
customer_id char(4),
salesman_id char(4),
primary key(order_no),
foreign key(salesman_id) references salesman(salesman_id),
foreign key(customer_id) references customer(customer_id));
INSERT INTO orders values('70001',4000,'2022-10-15','3005','5002');
INSERT INTO orders values('70009',5500,'2022-10-5','3001','5002');
INSERT INTO orders values('70002',5500,'2022-10-5','3002','5001');
INSERT INTO orders values('70004',6000,'2022-10-12','3009','5002');
INSERT INTO orders values('70007',9000,'2022-8-5','3005','5002');
INSERT INTO orders values('70005',4500,'2022-10-5','3007','5001');
INSERT INTO orders values('70008',3000,'2022-10-15','3002','5001');
INSERT INTO orders values('70010',2000,'2022-10-12','3004','5006');
INSERT INTO orders values('70003',10000,'2022-8-5','3009','5002');
INSERT INTO orders values('70012',4500,'2022-10-5','3008','5002');
INSERT INTO orders values('70011',5500,'2022-10-5','3003','5007');

CREATE TABLE nobel_win (
  YEAR year,
  SUBJECT TEXT,
  WINNER TEXT,
  COUNTRY text,
  CATEGORY text
);
INSERT INTO nobel_win VALUES 
(1970,'Physics','Hannes Alfven','Sweden','Scientist'),
(1970,'Physics','Louis Neel','France','Scientist'),
(1970,'Chemistry','Luis Federico Leloir','France','Scientist'),
(1970,'Physiology','Ulf von Euler','Sweden','Scientist'),
(1970,'Physiology','Bernard Katz','Germany','Scientist'),
(1970,'Literature','Aleksandr Solzhenitsyn','Russia','Linguist'),
(1970,'Economics','Paul Samuelson','USA','Economist'),
(1970,'Physiology','Julius Axelrod','USA','Scientist'),
(1971,'Physics','Dennis Gabor','Hungary','Scientist'),
(1971,'Chemistry','Gerhard Herzberg','Germany','Scientist'),
(1971,'Peace','Willy Brandt','Germany','Chancellor'),
(1971,'Literature','Pablo Neruda','Chile','Linguist'),
(1971,'Economics','Simon Kuznets','Russia','Economist'),
(1978,'Peace','Anwar al-Sadat','Egypt','President'),
(1978,'Peace','Menachem Begin','Israel','Prime Minister'),
(1987,'Chemistry','Donald J. Cram','USA','Scientist'),
(1987,'Chemistry','Jean-Marie Lehn','France','Scientist'),
(1987,'Physiology','Susumu Tonegawa','Japan','Scientist'),
(1994,'Economics','Reinhard Selten','Germany','Economist'),
(1994,'Peace','Yitzhak Rabin','Israel','Prime Minister'),
(1987,'Physics','Johannes Georg Bednorz','Germany','Scientist'),
(1987,'Literature','Joseph Brodsky','Russia','Linguist'),
(1987,'Economics','Robert Solow','USA','Economist'),
(1994,'Literature','Kenzaburo Oe','Japan','Linguist');

CREATE TABLE item_mast (
  pro_id  integer,
  pro_name TEXT,
  pro_price integer,
  pro_com integer
);
-- insert some values
INSERT INTO item_mast VALUES 
(101,'Mother Board',3200,15),
(102,'Key Board',450,16),
(103,'ZIP drive',250,14),
(104,'Speaker',550,16),
(105,'Monitor',5000,11),
(106,'DVD drive',900,12),
(107,'CD drive',800,12),
(108,'Printer',2600,13),
(109,'Refill cartridge',350,13),
(110,'Mouse',250,12);
