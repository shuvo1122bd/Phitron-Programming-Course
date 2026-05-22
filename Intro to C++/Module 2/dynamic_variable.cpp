#include <bits/stdc++.h>
using namespace std;

int* v;
void dyna()
{
    int *p = new int;
    *p = 100;
    v = p;
    return;
}

int main()
{
    dyna();
    cout << *v << endl;
    return 0;
}