#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string s = "Hello programming";
        //print the ith index element
        cout << s[0]<<endl; 
        //print the ith index element by function.
        cout << s.at(4) <<endl;
        //print the first value of the string
        cout << s.front() << endl;
        //print the last value of the string
        cout << s.back() << endl;
        return 0;
    }