/*  C++ Program display Student Marksheet using Multiple inheritance  */
#include <iostream>
#include <stdio.h>
using namespace std;
class student
{
    int roll;
    char name[25];
    char add[25];
    char city[25];
public:
    student()
    {
        cout << "  Welcome In The Student Information System  " << endl;
    }
    void getdata()
    {
        cout << "\n Enter The Student Roll No : ";
        cin >> roll;
        cout << "\n Enter The Student Name : ";
        cin >> name;
        cout << "\n enter ther student address  ";
        cin >> add;
        cout << "\n enter the student city  ";
        cin >> city;
    }
    void putdata()
    {
        cout << "\n the student roll no: " << roll;
        cout << "\n the student name: " << name;
        cout << "\n the student city: " << city;
    }
};
class marks : public student
{
    int sub1;
    int sub2;
    int sub3;
    double per;
public:
    void input()
    {
        getdata();
        cout << "\n enter the marks of 1st Subject : ";
        cin >> sub1;
        cout << "\n enter the marks of 2nd Subject : ";
        cin >> sub2;
        cout << "\n enter the marks of 3rd Subject : ";
        cin >> sub3;
    }
    void output()
    {
        putdata();
        cout << "\n Subject 1 marks : " << sub1;
        cout << "\n Subject 2 marks : " << sub2;
        cout << "\n Subject 3 marks : " << sub3 << "\n";
    }
    void calculate()
    {
        per = (sub1 + sub2 + sub3) / 3;
        cout << "\n Total Percentage of Three Subject :: " << per << "%\n";
    }
};
class percentage : public marks
{
public:
    void out()
    {
        calculate();
    }
};
int main()
{
    // system("cls");
    percentage m1;
    int ch;
    int count = 0;
    do
    {
        cout << "\n1.Input data";
        cout << "\n2.Output data";
        cout << "\n3.Calculate percentage";
        cout << "\n4.Exit\n";
        cout << "\nEnter the choice :: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            m1.input();
            count++;
            break;

        case 2:
            m1.output();
            break;

        case 3:
            m1.out();
            break;
        }
    } while (ch != 4);
}