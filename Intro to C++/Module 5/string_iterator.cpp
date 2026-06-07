#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string s = "nazmul islam shuvo";
        //printing by iterator, string :: iterator == auto;
        for(auto it = s.begin(); it < s.end(); it++)
        {
            cout << *it;
        }
        /*
        -> iterator
        - begin() = is a object of first index of string
        - end() = is a object of last index of string, in null character
        */
        return 0;
    }