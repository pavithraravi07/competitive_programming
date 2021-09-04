/*
Given a positive integer n, do the following:

If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n>9, print Greater than 9.

Input Format
A single integer, n.

Output Format
If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9.
*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    
    string rep[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};

    cout<<(n > 9 ? rep[0] : rep[n]);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
