create table customer (
cu_id  int primary key,
cu_nsme varchar(25),
cu_age int not null
);

insert into customer values 
(101,"Diveysh",20),
(102,"Rohan",22),
(103,"Ashish",19),
(104,"Sagar",23);
insert into customer values(105,"Kuldip",23);

select * from customer;

create table orders(
cu_id int,
order_id int not null,
order_price int not null,
foreign key (cu_id) references customer(cu_id)
);

insert into orders values
(101,15055,1500), 
(101,15052,1200), 
(102,12055,800), 
(104,12044,1566);

select * from orders;

drop table orders;

select * from orders;

insert into orders values 
(101,15055,1500), 
(101,15052,1200), 
(102,12055,800), 
(104,12044,1566);
insert into orders values (105,12048,1544);

select * from customer;

select * from orders;
-- used to natural join and campair to table this is a explain for simiiler values is printing the table 
select * from customer natural join orders;

select customer.cu_id,customer.cu_name,customer.cu_age,orders.order_id,orders.order_price from customer
left join orders on customer.cu_id = orders.cu_id;

alter table customer rename column cu_nsme to cu_name;  

select * from customer;

select customer.cu_id,customer.cu_age,orders.order_id,orders.order_price from customer
right join orders on customer.cu_id = orders.cu_id;

select customer.cu_name,customer.cu_age,orders.order_id,orders.order_price from customer
inner join orders on customer.cu_id = orders.cu_id;

select customer.cu_id,customer.cu_name,orders.order_id,orders.order_price from customer
inner join orders on customer.cu_id = orders.cu_id;

select * from customer cross join orders;

select * from customer union select * from orders;

select * from customer union all select * from orders;

select * from student;

drop table students;
