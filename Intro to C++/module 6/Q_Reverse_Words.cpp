#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string s;
        getline(cin,s);

        stringstream ss(s);
        string word;

        ss >> word; //printed first word without space;
        reverse(word.begin(), word.end());
        cout << word;

        while(ss >> word)
        {
            reverse(word.begin(), word.end());
            cout <<" " << word; // protome space;
        }
        
        return 0;
    }