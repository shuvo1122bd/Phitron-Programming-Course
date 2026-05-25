#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int unique_Id;
    string name;
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;
    Student s1, s2, s3; // there is fixed three student at a time
    for (int i = 0; i < t; i++)
    {
        cin >> s1.unique_Id >> s1.name >> s1.section >> s1.total_marks;
        cin >> s2.unique_Id >> s2.name >> s2.section >> s2.total_marks;
        cin >> s3.unique_Id >> s3.name >> s3.section >> s3.total_marks;

        int max_marks = s1.total_marks;

        if (s2.total_marks > max_marks)
        {
            max_marks = s2.total_marks;
        }
        if (s3.total_marks > max_marks)
        {
            max_marks = s3.total_marks;
        }

        if (s1.total_marks == s2.total_marks && s1.total_marks > s3.total_marks)
        {
            if (s1.unique_Id < s2.unique_Id)
            {
                max_marks = s1.total_marks;
            }
            else
            {
                max_marks = s2.total_marks;
            }
        }
        if (s1.total_marks == s3.total_marks && s1.total_marks > s2.total_marks)
        {
            if (s1.unique_Id < s3.unique_Id)
            {
                max_marks = s1.total_marks;
            }
            else
            {
                max_marks = s3.total_marks;
            }
        }
        if (s2.total_marks == s3.total_marks && s2.total_marks > s1.total_marks)
        {
            if (s2.unique_Id < s3.unique_Id)
            {
                max_marks = s2.total_marks;
            }
            else
            {
                max_marks = s3.total_marks;
            }
        }

        if (max_marks == s1.total_marks)
        {
            cout << s1.unique_Id << " " << s1.name << " " << s1.section << " " << s1.total_marks << endl;
        }
        else if (max_marks == s2.total_marks)
        {
            cout << s2.unique_Id << " " << s2.name << " " << s2.section << " " << s2.total_marks << endl;
        }
        else
        {
            cout << s3.unique_Id << " " << s3.name << " " << s3.section << " " << s3.total_marks << endl;
        }
    }

    return 0;
}