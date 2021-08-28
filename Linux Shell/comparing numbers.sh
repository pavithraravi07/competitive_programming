:'
Input Format
Two lines containing one integer each (X and Y, respectively).

Constraints
-

Output Format
Exactly one of the following lines:
- X is less than Y
- X is greater than Y
- X is equal to Y
'

read X
read Y
if (( X > Y )); then
    printf "X is greater than Y"
elif (( X == Y )); then
    printf "X is equal to Y"
else
    printf "X is less than Y"
fi