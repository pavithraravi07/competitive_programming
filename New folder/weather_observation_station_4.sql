/*
Write a query to find the difference between the total number of cities and the unique number of cities in the table STATION.
*/


select (count(city)-count(distinct city)) from station; 