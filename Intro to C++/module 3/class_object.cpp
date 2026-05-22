#include<bits/stdc++.h>
using namespace std;

class Student
{
    public :
    char name[100];
    int roll;
    char section;
    double gpa;
};

int main()
    {
        Student s,c;
        cin >>s.name >> s.roll >>s.section>>s.gpa;
        cin >>c.name >> c.roll >>c.section>>c.gpa;

        cout <<"1. Student name: " << s.name << endl <<"Roll : " << s.roll <<endl <<"section : " << s.section <<endl <<"GPA : " << s.gpa << endl;
        cout <<"2. Student name: " << c.name << endl <<"Roll : " << c.roll <<endl <<"section : " << c.section <<endl <<"GPA : " << c.gpa << endl;
        return 0;
    }