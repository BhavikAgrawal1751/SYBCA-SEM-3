#include<iostream>
using namespace std;
class teacher
{
public:
    int a;
     teacher()
    {
        cout<<"parent class";
        cin>>a;
        cout<<a<<"\n";
    }
};
class stud:public teacher
{
public:
    int a;
    stud()
    {
        cout<<"child class";
        cin>>a;
        cout<<a;
    }

};
int main()
{

 stud ob;
 //ob.show();
 return 0;
}
