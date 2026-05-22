#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    switch(x%2) // same as if-else condition
    {
        case 0:
        cout << "Even\n";
        break;

        case 1:
        cout << "odd\n";
        break;
    }

    return 0;
}