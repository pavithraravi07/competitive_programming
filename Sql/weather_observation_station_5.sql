/*
Query the two cities in STATION with the shortest and longest CITY names, as well as their respective lengths 
(i.e.: number of characters in the name). 
If there is more than one smallest or largest city, choose the one that comes first when ordered alphabetically.
*/



select * from 
    (select city,length(city) from station 
    order by length(city), city asc)
where rownum=1
union 
select * from
    (select city, length(city) from station 
    order by length(city) desc, city asc)
where rownum=1;
