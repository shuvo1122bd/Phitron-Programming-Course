#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // input with spaces

    stringstream ss(s);
    string word;

    int chk = 0;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            chk = 1;
            break;
        }
    }

    if (chk == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}