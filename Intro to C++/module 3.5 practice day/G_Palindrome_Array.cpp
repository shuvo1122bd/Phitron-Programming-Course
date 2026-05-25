#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        int a[n];
        for(int i= 0; i < n;i++)
        {
            cin >> a[i];
        }

        bool flag = true;
        for(int i = 0, j = n-1; i < j; i++, j--)
        {
            if(a[i] != a[j])
            {
                flag = false;
                break;
            }
        }

        if(flag == true)
        {
            cout << "YES";
        }
        else{
            cout <<"NO";
        }
        return 0;
    }