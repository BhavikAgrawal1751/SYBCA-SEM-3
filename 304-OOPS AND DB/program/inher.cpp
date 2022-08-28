#include<iostream>
#include<conio.h>
using namespace std;
class  teacher
{
    public:
        int a;


};
class student:public teacher
{

public:
    int b,c;
void show()
    {
        cin>>a>>b;
        c=a+b;
        cout<<c;
    }

};
int main()
{
    student obj;
    obj.show();

return 0;
}
