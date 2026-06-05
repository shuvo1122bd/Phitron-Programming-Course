#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    int jersey_no;
    string country;
};

int main()
    {
        Cricketer dhoni;
        dhoni.jersey_no = 7;
        dhoni.country = "India";

        Cricketer kholi;
        kholi.jersey_no = dhoni.jersey_no;
        kholi.country = dhoni.country;

        cout << kholi.jersey_no << endl << kholi.country<<endl;
        return 0;
    }