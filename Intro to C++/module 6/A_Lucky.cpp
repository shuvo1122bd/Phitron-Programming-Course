#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // input testcase
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        string n; // input numbers as a string
        cin >> n;

        int first_sum = 0;
        int last_sum = 0;

        // first  3 digit summation
        for (int i = 0; i < n.size() / 2; i++)
        {
            int num = n[i] - '0';
            first_sum += num;
        }
        // last 3 digit summation
        for (int i = n.size() / 2; i < n.size(); i++)
        {
            int num = n[i] - '0';
            last_sum += num;
        }

        // checking if first sum or last sum?
        if (first_sum == last_sum)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }

    return 0;
}