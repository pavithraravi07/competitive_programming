/*

In this exercise, you'll use the populations table to perform a self-join to calculate the percentage increase in population from 2010 to 2015 for each country code!

*/



SELECT p1.country_code, p1.size AS size2010, p2.size AS size2015
FROM populations AS p1 
	INNER JOIN populations AS p2
		USING (country_code);