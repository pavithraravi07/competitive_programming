/*You are given n triangles, specifically, their sides ai, bi and ci. Print them in the same style but
sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas
are different.
The best way to calculate a volume of the triangle with sides a, b and c is Heron's formula:
S = ⎷p * (p – a) * (p - b) * (p – c) where p = (a + b + c) / 2.

Input Format
First line of each test file contains a single integer n. n lines follow with ai, bi and ci on each
separated by single spaces.

Constraints
1 ≤ n ≤ 100
1 ≤ ai, bi, ci ≤ 70
ai + bi > ci, ai + ci > bi and bi + ci > ai

Output Format
Print exactly n lines. On each line print 3 integers separated by single spaces, which are ai, bi
and ci of the corresponding triangle.*/

#include <stdio.h>
#include <stdlib.h>
struct Triangle{
int a, b, c;
};
int square(struct Triangle t){
int a = t.a, b = t.b, c = t.c;
return (a + b + c) * (a + b - c) * (a - b + c) * (-a + b + c);
}
void sort_by_square(struct Triangle *a, int n){
for (int i = 0; i < n; i++)
for (int j = i + 1; j < n; j++)
if (square(a[i]) > square(a[j])){
struct Triangle temp = a[i];
a[i] = a[j];
a[j] = temp;
}

}
int main(){
int n;
scanf("%d", &n);
struct Triangle a[100];
for (int i = 0; i < n; i++)
scanf("%d %d %d", &a[i].a, &a[i].b, &a[i].c);
sort_by_square(a, n);
for (int i = 0; i < n; i++)
printf("%d %d %d\n", a[i].a, a[i].b, a[i].c);
return 0;
}