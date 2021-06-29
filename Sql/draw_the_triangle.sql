/*
P(R) represents a pattern drawn by Julia in R rows. The following pattern represents P(5):

* * * * * 
* * * * 
* * * 
* * 
*
Write a query to print the pattern P(20).
*/




set serveroutput on
declare
n number(2) := 20;
i number;
j number;
begin
for i in reverse 1..n
loop
for j in reverse 1..i
loop
dbms_output.put(' *');
end loop;
dbms_output.new_line;
end loop;
end;
/