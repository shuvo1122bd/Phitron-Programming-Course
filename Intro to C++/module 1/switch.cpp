#include <iostream>
using namespace std;

int main()
{
    int s;
    cin >> s;
    switch (s)
    {
    case 1:
        cout << "one";
        break;

    case 2:
        cout << "two";
        break;

    case 3:
        cout << "three";
        break;

    default:
        cout << "wrong answer";
        break;
    }

    return 0;
}
