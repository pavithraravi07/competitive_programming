/*
Query the Western Longitude (LONG_W)where the smallest Northern Latitude (LAT_N) in STATION is greater than 38.7780. 
Round your answer to 4 decimal places.
*/




select * from
(select round(long_w,4) from station 
where lat_n > 38.7780 order by lat_n)
where rownum = 1;