#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s; // first string
        cin >> s;

        string ss; // second string
        cin >> ss;

        int size = ss.size(); // checking size

        while (true)
        {
            int idx = s.find(ss); // learned from conceptual session
            if (idx != -1)
            {
                s.replace(idx, size, "#"); // replaced ss with '#'
            }
            else
            {
                break;
            }
        }

        cout << s << endl;
    }
    return 0;
}