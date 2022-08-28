#include<iostream>
using namespace std;
class student
{
    int marks;
    float percentage;
    public:
    void inputmarks()
    {
        cin>>marks>>percentage;
    }
    void displaymarks()
    {
        cout<<marks<<percentage;
    }
};

int main()
{
    student ob[5];

    for ( i = 0; i < 5; i++)
    {
        ob[i].inputmarks;
    }
    for ( i = 0; i < 5; i++)
    {
        ob[i].displaymarks;
    }
    
}