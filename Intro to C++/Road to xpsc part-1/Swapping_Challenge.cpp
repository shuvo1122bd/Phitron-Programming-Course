#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int me_index = n/2;
        int median_val = ar[0]; 
        int idx = 0; // ith index of median value

        // finding median value
        for(int  i = 0; i < n; i++)
        {
            int count = 0;
            for(int j = 0; j < n; j++)
            {
                if(ar[i] < ar[j])
                {
                    count++;
                }
            }
            if(me_index == count)
            {
                median_val = ar[i];
                idx = i;
                break;
            }
        }
        // median n/2 er index theke idx minus korle ans beriye jay
        cout << abs(me_index - idx);
        return 0;
    }