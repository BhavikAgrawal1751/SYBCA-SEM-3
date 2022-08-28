/*
    Create a class �Bank� comprises of data like bank_id, bank_name, brance_name and create another class �Account� which holds data like ac_no, ac_name, ac_type (saving/current), and balance. Create another class �Transaction� which holds the functions to perform following operations:
1.	Create New Account
2.	Deposit & Withdraw (Min 500 balance) in particular
3.	List out details of only those accounts whose type is �current�.*/

#include <iostream>
using namespace std;
class bank
{
public:
    int bank_id = 234;
    char bank_name[20] = "Bank Of Baroda";
    char branch[30] = "Udhna";
};
class account
{
public:
    int ac_no;
    char ac_name[50], ac_type[50], add[50];
    float balance, amount, avail_bal = 0.0, total = 0, withdraw1;
    char address[50], ifsc[20] = "KBKK7890K";
};
class Transaction : public account, public bank
{
public:
    void createAccount()
    {
        cout << "\n"
             << "Enter Account number : ";
        cin >> ac_no;
        cout << "\n"
             << "Enter your name : ";
        cin >> ac_name;
        cout << "Enter your street name : ";
        cin >> address;
        cout << "Enter account type \n 1.Savings\n 2. Current : ";
        cin >> ac_type;
        cout << "Enter amount to deposit to open Account (minimum 500) :";
        cin >> balance;
        cout << "\n"
             << "\t\t****Your Account has been created****"
             << "\n";
        cout << "\n"
             << "Your Ifsc code = " << ifsc;
    }
    void getInfo()
    {
        cout << "\n"
             << "Account holder name = " << ac_name;

        cout << "\n"
             << "Account holder street name = " << address;
        cout << "\n"
             << "Account type = " << ac_type;
        // cout <<"\n"<< "Account number = " << gen_acc;
    }
    void deposit()
    {
        cout << "\n"
             << "Enter amount to deposit : ";
        cin >> amount;
        total = balance + amount;
        cout << "\n"
             << "****Your amount get deposited****";
        cout << "\n"
             << "Your total amount = " << total;
    }
    void withdraw()
    {

        cout << "\n"
             << "Enter amount to withdraw : ";
        cin >> withdraw1;
        avail_bal = total - withdraw1;
        cout << "\n"
             << "Available balance = " << avail_bal;
    }
    void list_acc()
    {
        if (ac_type == "current" || ac_type == "Current")
        {
            cout << endl
                 << "Account holder name = " << ac_name;
            cout << endl
                 << "Account holder street name = " << address;
            cout << endl
                 << "Account type = " << ac_type;
            // cout << endl<< "Account number = " << gen_acc;
        }
        else
        {
            cout << endl
                 << "There is no Current Account in this Bank ";
        }
    }
};

int main(int argc, char const *argv[])
{

    Transaction trans;
    int choice;
    cout << "\n\t\t****Welcome To Our Bank****" << endl;
    cout << "Our Bank id = " << trans.bank_id << endl;
    cout << "Bank name = " << trans.bank_name << endl;
    cout << "Bank Branch = " << trans.branch << endl;
    while (true)
    {
        cout << endl
             << "\n\tFcilities: \n 1.Create Account.\n 2.Get details.\n 3.deposit.\n 4.WithDraw." << endl;
        cout << "5.list current account type people.\n 6. Exit" << endl;
        cout << endl
             << "Enter your choice = ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            trans.createAccount();
            break;
        }
        case 2:
        {
            trans.getInfo();
            break;
        }
        case 3:
        {
            trans.deposit();
            break;
        }
        case 4:
        {
            trans.withdraw();
            break;
        }
        case 5:
        {
            trans.list_acc();
            break;
        }
        case 6:
        {
            cout << endl
                 << "\n\t\t****Thanks for choosing our Services****" << endl;
            exit(0);
        }
        default:
        {
            cout << endl
                 << "Invalid choice";
        }
        }
    }
    return 0;
}
