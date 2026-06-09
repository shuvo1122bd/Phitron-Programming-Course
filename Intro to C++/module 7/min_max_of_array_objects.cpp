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
            cin >> a[i].name >> a[i].roll >> a[i].marks;
        }

        Student mn;
        mn.marks = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(a[i].marks < mn.marks)//max value of marks
            {
                mn = a[i];
            }
        }
        cout <<mn.name<<" "<<mn.roll<<" "<<mn.marks;
        return 0;
    }