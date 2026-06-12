#include <bits/stdc++.h>
using namespace std;

void times(int t)
{
    for (int i = 0; i < t; i++) // testcase
    {
        int n;
        char c;
        cin >> n >> c;

        for (int i = 0; i < n; i++)
        {
            cout << c << " ";
        }

        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    times(t);

    return 0;
}