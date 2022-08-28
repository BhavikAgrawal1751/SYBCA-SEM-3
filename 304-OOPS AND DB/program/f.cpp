#include<iostream>
using namespace std;
class c
{
    int a,b;
public:
    void demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<"\n";
        cout<<b;
    }
    friend void operator -(c &i)
    {
        i.a=-i.a;
        i.b=-i.b;
    }
    };
int main()
{
    c obj;
    obj.demo(3,4);
    obj.show();
    -obj;
    obj.show();
    return 0;
}
