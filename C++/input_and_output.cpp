/*
Task
Read 3 numbers from stdin and print their sum to stdout.

Input Format
One line that contains 3 space-separated integers: a, b, and c.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num1, num2, num3;
    cin>>num1>>num2>>num3;
    cout<<num1+num2+num3;
    return 0;
}
