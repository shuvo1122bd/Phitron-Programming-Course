#include<bits/stdc++.h>
using namespace std;

class Customer
{
    public :
    int total_buy;
    int discount;
    string grade;

    Customer(int total_buy, int discount, string grade)
    {
        this->total_buy = total_buy;
        this->discount = discount;
        this->grade = grade;
    }
};

int main()
    {
        Customer rahim(1250, 65, "blue");

        cout << rahim.total_buy <<" " << rahim.discount << " " <<rahim.grade;

        return 0;
    }