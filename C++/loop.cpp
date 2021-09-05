/*
In this challenge, you will use a for loop to increment a variable through a range.

Input Format
You will be given two positive integers, a and b(a <= b), separated by a newline.

Output Format
For each integer n in the inclusive interval [a, b]:
If 1 <= n <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n > 9 and it is an even number, then print "even".
Else if n > 9 and it is an odd number, then print "odd".
*/


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    string rep[] = {"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i = a; i <= b; i++)
        cout<<((i <= 9) ? rep[i] : ((i % 2 == 0) ? "even" : "odd"))<<endl;
    return 0;
}
