#include<bits/stdc++.h>
using namespace std;

class Student
{
    public :
    string name;
    int english;
    int math;

    Student(string name, int english, int math)
    {
        this->name = name;
        this->english = english;
        this->math = math;
    }

    void details()
    {
        cout <<"Name : " << name <<endl;
        cout <<"Marks of English : " << english <<endl;
        cout <<"Marks of Math : " << math <<endl;
        cout <<"Total average marks : " << (english+math) / 2 << endl;
    }
};

int main()
    {
        Student hasan("Hasan", 80, 86);
        Student omi("Omi", 78, 95);

        hasan.details();
        omi.details();
        return 0;
    }