/*


Using the countries table, create a new field AS geosize_group that groups the countries into three groups:

If surface_area is greater than 2 million, geosize_group is 'large'.
If surface_area is greater than 350 thousand but not larger than 2 million, geosize_group is 'medium'.
Otherwise, geosize_group is 'small'.


*/


SELECT name, continent, code, surface_area
CASE WHEN surface_area > 2000000 THEN 'large'
	 WHEN surface_area > 350000 THEN 'medium'
	 ELSE 'small' END 
	 AS geosize_group
FROM countries;