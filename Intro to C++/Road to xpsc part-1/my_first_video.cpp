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
        int k;
        cin >> k;

        // searching k in the array
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(ar[i] == k)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            cout << "-1";
        }
        else{
            int count  = 0;
            for(int  i = 0; i < k; i++)
            {
                int present = 0;
                // checking i in array
                for(int j = 0; j < n; j++)
                {
                    if(ar[j] == i)
                    {
                        present++;
                        break;
                    }
                }

                if(present == 0)
                {
                    count++;
                }
            }

            cout << count;
        }

        return 0;
    }