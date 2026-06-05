#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }

        int mex = 0; //minimum excluded value
        
        for(int i=0;i<n;i++)
        {
            if(ar[i] == mex)
            {
                mex++;
            }
        }
        cout << mex;
        return 0;
    }