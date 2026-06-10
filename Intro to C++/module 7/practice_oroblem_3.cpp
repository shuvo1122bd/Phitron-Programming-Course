#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string s;
        getline(cin,s);
        
        //taking a word
        string ss;
        cin >> ss;

        //putting s to stringstream
        stringstream st(s);
        string word;

        int count = 0;

        //finding word 'john' and counting
        while(st >> word)
        {
            if(word == "john")
            {
                count++;
            }
        }
        cout << count;
        
        return 0;
    }