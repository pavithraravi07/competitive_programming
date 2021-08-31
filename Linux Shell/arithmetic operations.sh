:'
A mathematical expression containing +,-,*,^, / and parenthesis will be provided. Read in the expression, then evaluate it. Display the result rounded to 3 decimal places.

Constraints
All numeric values are <= 999.
'

read a
printf "%.3f" `echo $a | bc -l`
