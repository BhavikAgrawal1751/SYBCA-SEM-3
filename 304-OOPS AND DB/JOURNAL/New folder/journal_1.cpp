// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
class bank
{                                                                                                                 
    public:
	int bank_id;
	char bank_name[100];
	char brance_name[100];
    void create_bank();
    void show_bank() const;
};
void bank::create_bank()
{
	system("CLS");
	cout << "\n\t\t\tEnter the Bank No. : ";
	cin >> bank_id;
	cout << "\n\n\t\t\tEnter the Name of the Bank : ";
	cin>>bank_name;
	cout << "\n\t\t\tEnter Brance Name of the Bank : ";
	cin>>brance_name;
	cout << "\n\n\t\t\tBank Created.."<<endl;
}

void bank::show_bank() const
{
	cout << "\n\t\t\tThe Bank No. : " << bank_id;
	cout << "\n\t\t\tName of The Bank is : ";
	cout << bank_name;
	cout << "\n\t\t\tThe Bank Brance Name is : " ;
    cout << brance_name<<endl;
    cout<<"Account Created...."<<endl;
}
class account
{
    public:
    int ac_no;
    int balance=0;
    int wd;
    int deposit;
    char name[20];
    char type[20];
    void create_account();
    void deposite();
    void withdraw_amount();
    void display();
};

void account :: create_account()
{
    cout<<"\n\t\t\tEnter the Name of Account Holder ";
    cin>>name;
    cout<<"\n\t\t\tEnter the Account No: ";
    cin>>ac_no;
    cout<<"\n\t\t\tEnter the Account Type (S/C) ";
    cin>>type;
    cout<<"\n\t\t\tEnter the Balnace of Account ";
    cin>>balance;
}
void account :: deposite()
{
    cout<<"\n\t\t\tDeposite The Amount in the Bank ";
    cin>>deposit;

    balance=balance+deposit;
}
void account :: withdraw_amount()
{
    cout<<"\n\t\t\tEnter the Amount you Want to WithDraw: ";
    cin>>wd;

    balance=balance-wd;
}

void account :: display()
{
    cout<<"\n\t\tAcccount Holder Name is "<<name<<endl;;
    cout<<"\n\t\tAccount Holder No is "<<ac_no<<endl;
    cout<<"\n\t\tThe Type of Account is "<<type<<endl;
    cout<<"\n\t\tThe Account Balance is "<<balance<<endl;
}

class transaction:public bank,public account
{
    public:
    void get()
    {
        create_bank();
        create_account();
    }
    void put()
    {
        deposite();
    }
    void out()
    {
        withdraw_amount();
    }
    void displayt()
    {
       
     show_bank();
     display();
    }
};

int main()
{
    transaction obj;
    int ch;

    do
{	
		cout << "\n\n\t\t\t\t======================\n";
		cout << "\t\t\t\tBANK MANAGEMENT SYSTEM";
		cout << "\n\t\t\t\t======================\n";

		cout << "\t\t\t\t    ::MAIN MENU::\n";
		cout << "\n\t\t\t\t1. NEW ACCOUNT";
		cout << "\n\t\t\t\t2. DEPOSIT AMOUNT";
		cout << "\n\t\t\t\t3. WITHDRAW AMOUNT";
		cout << "\n\t\t\t\t4. Display";
		cout << "\n\t\t\t\t5. EXIT";
		cout << "\n\n\t\t\t\tSelect Your Option (1-5): ";
		cin >> ch;

    switch(ch)
        {
            case 1:
            obj.get();
            break;
            case 2:
            obj.put();
            break;
            case 3:
            obj.out();
            break;
            case 4:
            obj.displayt();
            break;
            case 5:
            break;
            default:
            cout<<"Select Correct Option"<<endl;
            break;
        }
}while(ch!=5);
 
    return 0;
}