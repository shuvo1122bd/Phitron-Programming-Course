#include<bits/stdc++.h>
using namespace std;
//pass by value
// void check (int x)
// {
//     x = 50;
// }

// int main()
//     {
//         int x = 10;
//         check(x);
//         cout << x;
//         return 0;
//     }

//pass by reference
void check (int* x)
{
    *x = 50;
}

int main()
    {
        int x = 10;
        check(&x);
        cout << x;
        return 0;
    }