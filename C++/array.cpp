/*
You will be given an array of N integers and you have to print the integers in the reverse order.

Input Format
The first line of the input contains N,where N is the number of integers.The next line contains N space-separated integers.

Output Format
Print the N integers of the array in the reverse order, space-separated on a single line.
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>> size;
    int arr[size]; 
    for (int i=0;i<size; i++){
        cin>>arr[i];
    }
    for (int i=size-1;i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
