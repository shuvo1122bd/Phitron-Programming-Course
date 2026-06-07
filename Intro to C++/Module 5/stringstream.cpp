#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string s;
        getline(cin,s);

        stringstream st(s);
        string sentence;
        while (st >> sentence)
        {
            cout << sentence << endl;
        }
        return 0;
    }