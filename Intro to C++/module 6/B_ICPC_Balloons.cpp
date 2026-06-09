#include <bits/stdc++.h>
using namespace std;

int main()
{
    // testcases
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        // length of string
        int n;
        cin >> n;

        // string
        string s;
        cin >> s;

        int fre[26] = {0}; //count letters

        int res = 0; 

        for (int i = 0; i < n; i++)
        {
            int idx = s[i] - 'A'; // index of fre

            fre[idx]++;

            if (fre[idx] > 1) // checking if its greater than 1 or not
            {
                res++;
            }
            else
            {
                res += 2;
            }
        }

        cout << res << endl;
    }

    return 0;
}