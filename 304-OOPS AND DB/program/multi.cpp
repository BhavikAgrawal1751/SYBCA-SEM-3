#include <iostream>
#include <conio.h>
using namespace std;

class academic
{
public:
    int marks;
    void getdata()
    {
        cout << "enter marks";
        cin >> marks;
    }
};
class sports
{
public:
    char grade;
    void readgrade()
    {
        cout << "enter grade";
        cin >> grade;
    }
};
class student : public academic, public sports
{
    public:
    void display()
    {
        cout << marks;
        cout << grade;
    }
};

int main()
{
    student s1;
    s1.getdata();
    s1.readgrade();
    s1.display();
    return 0;
}