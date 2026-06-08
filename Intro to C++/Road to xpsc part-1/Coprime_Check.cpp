#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int t;
        cin >> t;
        for(int i = 0; i < t; i++)
        {
            int a,b;
            cin >> a >> b;
            int count = 0;
            for(int j = 1; j < a; j++)
            {
                if( j % 2 == 0)
                {
                    for(int k = 1; k < b; k++)
                    {
                        if(k % 2 == 0)
                        {
                            if( j == k)
                            {
                                count++;
                            }
                        }
                    }
                }
            }
            cout << count << endl;
        }
        return 0;
    }