:'
Given three integers (x, y, and z) representing the three sides of a triangle, identify whether the triangle is scalene, isosceles, or equilateral.

If all three sides are equal, output EQUILATERAL.
Otherwise, if any two sides are equal, output ISOSCELES.
Otherwise, output SCALENE.

Input Format
Three integers, each on a new line.


Output Format
One word: either "SCALENE" or "EQUILATERAL" or "ISOSCELES" (quotation marks excluded).
'


read x
read y
read z

if [[ $x == $y && $y == $z ]]
then
    echo 'EQUILATERAL';
elif [[ $x == $y || $y == $z || $x == $z ]]
then
    echo 'ISOSCELES';
else
    echo 'SCALENE';
fi