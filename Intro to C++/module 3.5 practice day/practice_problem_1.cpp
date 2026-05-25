#include<bits/stdc++.h>
using namespace std;

class Student
{
    //class objects
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    //constructor
    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
    
};

int main()
    {
        Student rahim("rahim", 5, 'B', 64, 9 );
        Student karim("karim", 2, 'A', 52, 9 );
        Student jamila("jamila", 10, 'C', 33, 9 );

        int highest = max({rahim.math_marks, karim.math_marks,jamila.math_marks});

        if(highest == karim.math_marks)
        {
            cout << karim.name;
        }
        else if(highest == rahim.math_marks)
        {
            cout << rahim.name;
        }
        else if(highest == jamila.math_marks)
        {
            cout << karim.name;
        }
        return 0;
    }