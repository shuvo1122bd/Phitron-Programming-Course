#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        int ar[n];
        
        
        int even = n;
        int odd = 1;

        for(int i = 1; i <= n; i++)
        {
            if(i%2 !=0)
            {
                cout << odd <<" ";
                odd++;
            }
            else if(i%2 == 0)
            {
                cout << even <<" ";
                even--;
            }
        }
        
        return 0;
    }