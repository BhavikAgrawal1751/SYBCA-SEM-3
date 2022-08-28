#include <iostream>
using namespace std;
class demo
{
public:
int a,b;
demo()
{
    a=10;
    b=10;
}
};

int main()
{
    demo dl;
    cout<<"a = "<<dl.a<<endl;
    cout<<"b = "<<dl.b;
}