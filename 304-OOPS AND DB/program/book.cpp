#include <iostream>
#include<string>
using namespace std;

class book
{
public:
     int bookid, year;
     string bookname, publication;
     void book1();
};
void book ::book1()
{
     cout << "bookid : ";
     cin >> bookid;
     cout << "bookname : ";
     cin >> bookname;
     cout << "year : ";
     cin >> year;
     cout << "publication : ";
     cin >> publication;
}
class student : public book
{
public:
     int rollno, year;
     string name, books;
     void students();
     void output();
};
void student::students()
{
     cout << "rollno : ";
     cin >> rollno;
     cout << "name : ";
     cin >> name;
     cout << "year : ";
     cin >> year;
     cout << "books : ";
     cin >> books;
}
void student::output()
{
     cout << "\n"
          << rollno << "\t"
          << name << "\t"
          << year << "\t"
          << books;
}
int main(int argc, char const *argv[])
{
     student s[2];
     for (int i = 0; i < 2; i++)
     {
          s[i].book1();
     }
     for (int i = 0; i < 2; i++)
     {
          s[i].students();
     }
     for (int i = 0; i < 2; i++)
     {
          s[i].output();
     }
     return 0;
}

