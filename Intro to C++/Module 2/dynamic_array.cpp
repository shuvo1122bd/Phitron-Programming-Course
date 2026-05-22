#include<bits/stdc++.h>
using namespace std;

int main()
{
    int* ar = new int[5]; //dynamic array
    for(int i = 0; i < 5; i++)
    {
        cin >> ar[i];
    }
    for(int i = 0; i < 5; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}