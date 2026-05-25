#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    sort(a, a + n);
    for (int i = 0; i < n; i++) // printing ascending order 
    {
        cout << a[i] << " ";
    }

    cout << endl;


    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++) //printing descending order
    {
        cout << a[i] << " ";
    }

    return 0;
}