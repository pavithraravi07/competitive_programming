/*
Input Format
Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format
Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
*/

#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<d<<"\n";
    cout<<fixed<<setprecision(9)<<e<<"\n";
    return 0;
}