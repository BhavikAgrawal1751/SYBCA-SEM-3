#include<iostream>
#include<string.h>
using namespace std;
class stringcompare
{
    char s[50];
public:
   stringcompare()
    {
            s[0]='\0';
    }
    void input()
    {
        cout<<"input string: ";
        cin>>s;
    }
    void operator ==(stringcompare st)
    {
        if(strcmp(s,st.s)==0)
        {
            cout<<"both equal";
        }
        else
        {
               cout<<"both are  not equal";

        }
    }
};
int main()
{
    stringcompare s1,s2;
    s1.input();
    s2.input();
    s1==s2;
    return 0;
}
