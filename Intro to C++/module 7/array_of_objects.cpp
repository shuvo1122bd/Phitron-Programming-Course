#include<bits/stdc++.h>
using namespace std;

class Student
{
    public :
    string name;
    int roll;
    int marks;
};

int main()
    {
        int n;
        cin >> n;
        Student a[n]; //array of objects
        for(int i = 0; i < n; i++)
        {
            cin >> a[i]. name >> a[i].roll >> a[i].marks;
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i].marks < 80)
            {
                cout << a[i]. name<<" "<< a[i].roll <<" "<< a[i].marks <<endl;
            }
        }
        return 0;
    }