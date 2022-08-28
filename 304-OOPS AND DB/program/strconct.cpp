//string concat
#include<iostream>
#include<string.h>
using namespace std;
class stringconcat
{
    char s[50];
public:
   stringconcat()
    {
            //s[0]='\0';
    }
    void input()
    {
        cout<<"input string: ";
        cin>>s;
    }
    void operator +(stringconcat st)
    {
        strcat(s,st.s);
        cout<<"strings are:"<<s;
    }
};
int main()
{
    stringconcat s1,s2;
    s1.input();
    s2.input();
    s1+s2;
    return 0;
}
