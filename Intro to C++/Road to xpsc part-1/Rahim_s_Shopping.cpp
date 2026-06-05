#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; // n = item, k = taka
    cin >> n >> k;
    int price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }

    int afford[n] = {0};
    int idx = 0;
    // int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (price[i] <= k)
        {
            afford[idx] = price[i];
            idx++;
            // count++;
        }
    }

    int mx = afford[0];

    for(int i = 0; i < n; i++)
    {
        mx = max(mx, afford[i]);
    }

    // int* expensive = max_element(afford, afford+n);

    if (idx > 0)
    {
        cout << mx;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}