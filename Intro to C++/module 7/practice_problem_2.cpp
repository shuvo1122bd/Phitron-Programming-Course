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

int main()
    {
        int n;
        cin >> n;
        Student ar[n];
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
        }

        reverse(ar, ar+n); //reverse array by built-in function


        for(int i = 0; i < n; i++)
        {
            cout << ar[i].name<<" "<<ar[i].roll <<" "<<ar[i].marks<<endl;
        }
        return 0;
    }