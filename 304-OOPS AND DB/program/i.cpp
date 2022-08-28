#include<iostream>
#include<conio.h>
using namespace std;
class  teacher
{
    public:
        int a;
        teacher()
        {
            cout<<"base class";
            cin>>a;
            cout<<a;
        }


};
class student:public teacher
{
public:
    int a;
    student()
    {
        cout<<"child class";
        cin>>a;
        cout<<a;
    }

};
int main()
{
    student obj;


return 0;
}
