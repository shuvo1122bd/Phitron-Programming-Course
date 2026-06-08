#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "NO"<<endl;
            continue;
        }
            int non_solid = 0;
            int sqrt_n = sqrt(n);
            for (int j = 2; j <= sqrt_n; j++)
            {
                if (n % j == 0)
                {
                    non_solid++;
                    break;
                }
            }

            if (non_solid == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        
    }
    return 0;
}