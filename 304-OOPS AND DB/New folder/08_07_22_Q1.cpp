#include <iostream>
using namespace std;
class Employee
{
public:
    float salary = 20000;
};

class programmer : public Employee
{
public:
    float bonus = 5000;
};

int main()
{
    programmer P1;
    cout << "Salary :- " << P1.salary << endl;
    cout << "Bonus :- " << P1.bonus << endl;
}