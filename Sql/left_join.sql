/*

Change the code to perform a LEFT JOIN instead of an INNER JOIN. 
After executing this query, note how many records the query result contains.

*/


SELECT c1.name AS city, code, c2.name AS country, 
	region, city_prop_pop
	FROM cities AS c1
		LEFT JOIN countries AS c2
			ON c1.country_code = c2.code
ORDER BY code DESC;
