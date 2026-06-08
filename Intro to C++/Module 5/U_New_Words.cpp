#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string s; //input string
        cin >> s;

        for(int i = 0; i < s.size(); i++) //string to lowercase
        {
            char c = s[i];
            s[i] = tolower(c);
        }

        int fre[26] = {0};
        for(int i = 0; i < s.size(); i++)// frequency array for counting letter
        {
            if(s[i] == 'e' || s[i] == 'g'||s[i] == 'y' ||s[i] == 'p' ||s[i] == 't')
            {
                fre[s[i] - 'a']++; // index. example : fre[101 - 97] ; its means fre[5]; 101 == 'e', 97 == 'a'
            }
        }

        int res = INT_MAX;
        for(int i = 0; i < 26; i++)
        {
            if(fre[i] > 0)//if letter exist it would greater than 0
            {
                res = min(res, fre[i]); //finding minimum
            }
        }
        cout << res; //answer
        
        return 0;
    }