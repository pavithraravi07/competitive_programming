/*

Inner join countries on the left and languages on the right with USING(code).
Select the fields corresponding to:
country name AS country,
continent name,
language name AS language, and
whether or not the language is official.
Remember to alias your tables using the first letter of their names.

*/


SELECT c.name AS country, continent, l.name AS language, official
FROM countries AS c
	INNER JOIN language AS l
		USING (code);