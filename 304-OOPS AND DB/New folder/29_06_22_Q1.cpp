#include <iostream>
using namespace std;
class items
{
private:
    int icode[20];
    int iprice[20];
    // int count;
public:
    int count;
    items()
    {
        count=0;
    }
    
    void getitem();
    void dispsum();
    void removeitem();
    void dispitem();
};

void items::getitem()
{
    cout << "Enter item code :- ";
    cin >> icode[count];
    cout << "Enter item price :- ";
    cin >> iprice[count];
    count++;
}

void items::dispsum()
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = sum + iprice[i];
    }
    cout << "Total Value :- " << sum << "\n";
}

void items::removeitem()
{
    int a;
    cout << "Enter item code to remove :- ";
    cin >> a;
    for (int i = 0; i < count; i++)
    {
        if (a == icode[i])
        {
            iprice[i] == 0;
        }
    }
}

void items::dispitem()
{
    cout << "-----Code Price -----";
    for (int i = 0; i < count; i++)
    {
        cout << "\n"
             << icode[count];
        cout << "\n"
             << iprice[count];
    }
    cout << "\n";
}

int main()
{
    items order;
    int choice;
    // int count=0;
    do
    {
        cout << "Item Order Menu";
        cout << "\n============";
        cout << "\n1.Add Order Item";
        cout << "\nEnter Your Choice :- ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            order.getitem();
            break;
        case 2:
            order.dispsum();
            break;
        case 3:
            order.removeitem();
            break;
        case 4:
            order.dispitem();
            break;
        case 5:
            break;
        default:
            cout << "Invaild Choice Vaild[1-5]";
            break;
        }
    } while (choice != 5);
}