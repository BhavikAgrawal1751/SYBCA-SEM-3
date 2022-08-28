#include<iostream>
using namespace std;
inline int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
int main()
{
    cout<<"Maximum Number is = "<<max(20,10)<<endl;
    cout<<"Maximum Number is = "<<max(10,20);
}