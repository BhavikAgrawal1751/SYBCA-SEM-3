#include <iostream>  
using namespace std;  
class A  
{  
     
    public:  
    void display()  
    {  
        int x=5;
        cout << "Value of x is : " << x;  
    }  
};  
class B: public A  
{  
      
    public:  
    void display()  
    {  
    int y = 10;
        cout << "Value of y is : " <<y;  
    }  
};  
int main()  
{  
    A *a;  
    B b;  
    a = &b;  
   a->display();  
    return 0;  
}  
