#include <iostream>
using namespace std;
class number
{
    int n;

public:
    void read()
    {
        cout << "enter no:";
        cin >> n;
    }
    int operator<(number x)
    {
        if (n < x.n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator>(number x)
    {
        if (n > x.n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator==(number x)
    {
        if (n == x.n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    number n1, n2;
    n1.read();
    n2.read();
    if (n1 < n2)
    {
        cout << "n1 is less than n2";
    }
    else if (n1 > n2)
    {
        cout << "n1 is grater than n2";
    }
    else if (n1 == n2)
    {
        cout << "n1 is equal to n2";
    }

    return 0;
}
