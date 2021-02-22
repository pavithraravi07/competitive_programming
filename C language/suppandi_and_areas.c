/*Suppandi is trying to take part in the local village math quiz. In the first round, he is asked about
shapes and areas. Suppandi, is confused, he was never any good at math. And also, he is bad at
remembering the names of shapes. Instead, you will be helping him calculate the area of shapes.
• When he says rectangle he is actually referring to a square.
• When he says square, he is actually referring to a triangle.
• When he says triangle he is referring to a rectangle
• And when he is confused, he just says something random. At this point, all you can do is
say 0.
Help Suppandi by printing the correct answer in an integer.

Input Format
• Name of shape (always in upper case R  Rectangle, S  Square, T  Triangle)
• Length of 1 side
• Length of other side
Note: In case of triangle, you can consider the sides as height and length of base

Output Format
• Print the area of the shape.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int l,b;
    char c;
    scanf("%c %d %d",&c,&b,&l);
    switch (c) {
        case 'R': printf("%d",l*b); break;
        case 'S': printf("%d",(l*b)/2); break;
        case 'T': printf("%d",l*b);break;
        default: printf("%d",0);
    }
    return 0;
}