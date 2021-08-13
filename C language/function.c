/*
Task

Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Note

There is not built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

Input Format

Input will contain four integers - a, b, c, d, one on each line.

Output Format

Print the greatest of the four integers.
Note: I/O will be automatically handled.
*/





#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    if ((a>=b) && (a>=c) && (a>=d))
        return a;
    else if ((b>=c) && (b>=d))
        return b;
    else if(c>=d)
        return c;
    else
        return d;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
