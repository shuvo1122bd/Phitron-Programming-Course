#include<bits/stdc++.h>
using namespace std;

//class
class Student 
{
    public : 
    string name;
    int roll;
    int marks;
};

//custom compare function
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
    {
        return true;
    }
    else if(a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else{
        return false;
    }
        //ternary operator
    // return a.marks == b.marks ? a.roll < b.roll : a.marks > b.marks;
}

int main()
    {
        int n;
        cin >> n;

        Student ar[n]; // array of objects

        for(int i = 0; i < n; i++)
        {
            cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
        }

        sort(ar, ar+n, cmp);

        for(int i = 0; i < n; i++)
        {
            cout << ar[i].name << " "<<ar[i].roll<<" "<< ar[i].marks<<endl;
        }

        return 0;
    }