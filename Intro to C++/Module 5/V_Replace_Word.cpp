#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string s;
        cin >> s;

        while(true)
        {
            int idx = s.find("EGYPT");
            if(idx == -1)
            {
                break;
            }
            else
            {
                s.replace(idx, 5, " ");
            }
        }
        cout << s <<endl;

        return 0;
    }