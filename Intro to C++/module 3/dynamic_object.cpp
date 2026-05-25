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

Customer fun()
{
    Customer rahim(1650, 150, "yellow");
    return rahim;

}

int main()
    {
        Customer rahim = fun();

        cout << rahim.total_buy <<" " << rahim.discount << " " <<rahim.grade;

        return 0;
    }