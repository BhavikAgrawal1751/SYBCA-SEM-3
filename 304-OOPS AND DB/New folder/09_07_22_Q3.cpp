#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_number;
    public:
    void get_number(int);
    void put_number();
};

void student :: get_number(int a)
{
    roll_number = a;
}

void student :: put_number()
{
    cout<<"Roll Number : "<<roll_number<<endl;
}

class test : public student
{
    protected:
    float sub1;
    float sub2;
    public:
    void get_marks(float,float);
    void put_marks();
};

void test :: get_marks(float x,float y)
{
    sub1 = x;
    sub2 = y;
}

void test ::put_marks()
{
    cout<<"Marks in Subject 1 = "<<sub1<<endl;
    cout<<"Marks in Subject 2 = "<<sub2<<endl;
}

class result : public test
{
    float total;
    public:
    void display();
};

void result ::display()
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout<<"Total = "<<total<<endl;
}

int main()
{
    result student1;
    student1.get_number(100);
    student1.get_marks(85.85,70.05);
    student1.display();
}