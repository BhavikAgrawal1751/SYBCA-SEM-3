#include<iostream>
#include<conio.h>
using namespace std;
class A
{

    public:

    void display1()
    {

        cout<<"class a fuction";
    }

};
class b:public  A
{
public:
    void display2()
    {
        cout<<"class b function";
    }
};

class c:public A
{
public:
    void display3()
    {
        cout<<"class c function";
    }
};
class d:public b,public c
{
public:
    void display4()
    {
        cout<<"class d function";
    }
};


int main()
{
    d obj;
    obj.display2();
    obj.display3();
    obj.display4();
    c obj1;
    obj1.display1();
return 0;
}
