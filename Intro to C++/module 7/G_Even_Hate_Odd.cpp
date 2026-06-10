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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        if (n % 2 != 0)
        {
            cout << "-1"<<endl;
        }
        else
        {
            int odd = 0;
            int even = 0;
            for (int i = 0; i < n; i++)
            {
                if (ar[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

            int mx = max(odd, even);

            int res = mx - (n / 2);

            cout << res << endl;
        }
    }

    return 0;
}