//hirarchical inheritance

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class comman
{
    string name;
    string gender;
    int age;
    public:
    void getinfo()
    {
        cout<<"get detail";
        cin>>name;
        cin>>gender;
        cin>>age;

    }
    void display()

    {
        cout<<"display method";
        cout<<name<<gender<<age;
    }

};

class pri:public comman
{
    int salary;
public:
        void getsalary()
        {
            cin>>salary;
        }
        void showsalary()
        {
            cout<<salary;
        }
};
class teacher:public comman
{
   int salary;
public:
        void getsalary()
        {
            cin>>salary;
        }
        void showsalary()
        {
            cout<<salary;
        }
};


class student:public comman
{
   char grade;
public:
        void getgrade()
        {
            cin>>grade;
        }
        void showgrade()
        {
            cout<<grade;
        }
};

int main()
{

    pri p1;
    p1.getinfo();
    p1.getsalary();
    p1.display();
    p1.showsalary();
    return 0;
}



