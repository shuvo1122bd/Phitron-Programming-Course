#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count_a = 0;
        int count_d = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'A')
            {
                count_a++;
            }
            else{
                count_d++;
            }
        }

        if( count_a > count_d)
        {
            cout <<"Anton";
        }
        else if(count_a < count_d)
        {
            cout <<"Danik";
        }
        else
        {
            cout << "Friendship";
        }
        return 0;
    }