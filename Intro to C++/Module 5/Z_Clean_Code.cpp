#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string s;

        int idx2;
        int idx3;

        while(getline(cin,s))
        {
            int idx = s.find("//");
            if( idx != -1)
            {
                s.erase();
            }
            idx2 = s.find("/*");
            idx3 = s.find("*/");
            
            if(idx2 != -1)
            {
                s.erase(idx2, idx3);
            }
            
            cout << s <<endl;
            

        }

        return 0;
    }