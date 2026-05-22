#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
}