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
        cout << "  Welcome in the student information system  " << endl;
    }
    void getdata()
    {
        cout << "\n Enter the student roll no.  ";
        cin >> roll;
        cout << "\n Enter the student name  ";
        cin >> name;
        cout << "\n Enter ther student address  ";
        cin >> add;
        cout << "\n Enter the student city  ";
        cin >> city;
    }
    void putdata()
    {
        cout << "\n The Student Roll No: " << roll;
        cout << "\n The Student Name: " << name;
        cout << "\n The Student City: " << city;
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
        cout << "\n Enter the marks1: ";
        cin >> sub1;
        cout << "\n Enter the marks2: ";
        cin >> sub2;
        cout << "\n Enter the marks3: ";
        cin >> sub3;
    }
    void output()
    {
        putdata();
        cout << "\n marks1: " << sub1;
        cout << "\n marks2: " << sub2;
        cout << "\n marks3: " << sub3 << "\n";
    }
    void calculate()
    {

        per = (sub1 + sub2 + sub3) / 3;
        cout << "\n Total percentage :: " << per << "%\n";
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
    system("cls");
    percentage m1;
    int ch;
    int count = 0;
    do
    {
        cout << "\n1.Input data";
        cout << "\n2.Output data";
        cout << "\n3.Calculate percentage";
        cout << "\n4.Exit\n";
        cout << "\nEnter The Choice :: ";
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