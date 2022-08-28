#include<iostream>
using namespace std;
class student
{
    int rollno;
    float percentage;
    public:
    void inputrollno()
    {
        cin>>rollno>>percentage;
    }
    void displaypercentage()
    {
        cout<<rollno<<percentage;
    }
};