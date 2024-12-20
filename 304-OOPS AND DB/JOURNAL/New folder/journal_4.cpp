#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <conio.h>

using namespace std;

class Lib
{
    public:

    char bookname[100],auname[50],sc[20],sc1[50];
    int q,B,p;

    Lib()
    {
        strcpy(bookname,"NO Book Name");
        strcpy(auname,"No Author Name");
        strcpy(sc,"No Book ID");
        strcpy(sc1,"No Book ID");
        q=0;
        B=0;
        p=0;
    }

    void get();
    void student();
    void pass();
    void librarian();
    void password();
    void getdata();
    void show(int);
    void booklist(int);
    void modify();
    void see(int);
    int branch(int);
    void issue();
    void der(char [],int,int);
    void fine(int,int,int,int,int,int);
};

void Lib::getdata()
{
    int i;
    fflush(stdin);

    cout<<"\n\t\tEnter the Details : \n";
    cout<<"\n\t\tEnter Book's Name : ";
    cin.getline(bookname,100);

    for (i=0;bookname[i]!='\0';i++)
    {
        if (bookname[i]>='a'&&bookname[i]<='z')
        bookname[i]-=32;
    }

    cout<<"\n\t\tEnter Author's Name : ";
    cin.getline(auname,50);
    cout<<"\n\t\tEnter Publication Name : ";
    cin.getline(sc1,50);
    cout<<"\n\t\tEnter Book's ID : ";
    cin.getline(sc,20);
    cout<<"\n\t\tEnter Book's Price : ";
    cin>>p;
    cout<<"\n\t\tEnter Book's Quantity : ";
    cin>>q;
}

void Lib::show(int i)
{
    cout<<"\n\t\tBook Name : "<<bookname<<endl;
    cout<<"\n\t\tBook's Author Name : "<<auname<<endl;
    cout<<"\n\t\tBook's ID : "<<sc<<endl;
    cout<<"\n\t\tBook's Publication : "<<sc1<<endl;

    if (i==2)
    {
        cout<<"\n\t\tBook's Price : "<<p<<endl;
        cout<<"\n\t\tBook's Quantity : "<<q<<endl;
    }
}


void Lib::booklist(int i)
{
    int b,r=0;
    system("cls");
    b=branch(i);
    system("cls");

    ifstream intf("E:\\vs c++ programming\\Library Data\\Booksdata.txt",ios::binary);
    
    if (!intf)
    cout<<"\n\t\tFile Not Found.";

    else
    {
        cout<<"\n\t   ********************************* Book List  ************************************\n\n";
        intf.read((char *)this,sizeof(*this));

        while (!intf.eof())
        {
            if (b==B)
            {
                if (q==0 && i==1)
                {

                }
                
                else
                {
                    r++;
                    cout<<"\n\t\t*********************"<<r<<". *********************** \n";
                    show(i);
                }
            }

            intf.read((char *)this,sizeof(*this));
        }
    }

    cout<<"\n\t\tPress any key to continue......";
    getch();
    system("cls");

    if (i==1)
    student();

    else
    librarian();
}

void Lib::modify()
{
    char ch,st1[100];
    int i=0,b,cont=0;
    system("cls");
    
    cout<<"\n\t\t>>Please Choose one option : \n";
    cout<<"\n\t\t1. Modification In Current Books\n\n\t\t2. Add New Book\n\n\t\t3. Delete a Book\n\n\t\t4. Go Back\n";
    cout<<"\n\n\t\tEnter your choice : ";
    cin>>i;

    if (i==1)
    {
        system("cls");

        b=branch(2);

        ifstream intf1("E:\\vs c++ programming\\Library Data\\Booksdata.txt",ios::binary);

        if (!intf1)
        {
            cout<<"\n\t\tFile Not Found.\n";
            cout<<"\n\t\tPress any key to continue......";
            getch();
            system("cls");
            librarian();
        }

        intf1.close();
        system("cls");
        cout<<"\n\t\tPlease Choose One Option : \n";
        cout<<"\n\t\t1. Search By Book Name\n\n\t\t2. Search By Book's ID\n";
        cout<<"\n\t\tEnter Your Choice : ";
        cin>>i;
        fflush(stdin);

        if (i==1)
        {
            system("cls");
            cout<<"\n\t\tEnter Book Name : ";
            cin.getline(st1,100);
            system("cls");
            fstream intf("E:\\vs c++ programming\\Library Data\\Booksdata.txt",ios::in|ios::out|ios::ate|ios::binary);
            intf.seekg(0);
            intf.read((char *)this,sizeof(*this));

            while (!intf.eof())
            {
                for (i=0;b==B&&bookname[i]!='\0'&&st1[i]!='\0'&&(st1[i]==bookname[i]||st1[i]==bookname[i]+32);i++);
                if(bookname[i]=='\0'&&st1[i]=='\0')
                {
                    cont++;
                    getdata();
                    intf.seekp(intf.tellp()-sizeof(*this));
                    intf.write((char *)this,sizeof(*this));
                    break;
                }

                intf.read((char *)this,sizeof(*this));
            }

            intf.close();
        } 

        else if (i==2)
        {
            cout<<"\n\t\tEnter Book's ID : ";
            cin.getline(st1,100);
            system("cls");
            fstream intf("E:\\vs c++ programming\\Library Data\\Booksdata.txt",ios::in|ios::out|ios::ate|ios::binary);
            intf.seekg(0);
            intf.read((char *)this,sizeof(*this));

            while (!intf.eof())
            {
                for (i=0;b==B&&sc[i]!='\0'&&st1[i]!='\0'&&st1[i]==sc[i];i++);

                if (sc[i]=='\0'&&st1[i]=='\0')
                {
                    cont++;
                    getdata();
                    intf.seekp(intf.tellp()-sizeof(*this));
                    intf.write((char *)this,sizeof(*this));
                    break;
                }         

                intf.read((char *)this,sizeof(*this));       
            }

            intf.close();
        }

        else 
        {
            cout<<"\n\t\tIncorrect Input..........:(\n";
            cout<<"\n\t\tPress any key to continue.........";
            getch();
            system("cls");
            modify();
        }

        if (cont==0)
        {
            cout<<"\n\t\tBook Not Found.\n";
            cout<<"\n\t\tPress any key to continue......";
            getch();
            system("cls");
            modify();
        }

        else
        cout<<"\n\t\tUpdate Successfull.\n";
    }

    else if (i==2)
    {
        system("cls");
        B=branch(2);
        system("cls");
        getdata();
        ofstream outf("E:\\vs c++ programming\\Library Data\\Booksdata.txt",ios::app|ios::binary);
        outf.write((char *)this,sizeof(*this));
        outf.close();
        cout<<"\n\t\tBook added Successfully.\n";
    }

    else if (i==3)
    {
        system("cls");
        b=branch(2);
        ifstream intf1("E:\\vs c++ programming\\Library Data\\Booksdata.txt",ios::binary);
        
        if (!intf1)
        {
            cout<<"\n\t\tFile Not Found.\n";
            cout<<"\n\t\tPress any key to continue........";
            getch();
            intf1.close();
            system("cls");
            librarian();
        }

        intf1.close();
        system("cls");
        cout<<"\n\t\tPlease Choose One Option for Deletion : ";
        cout<<"\n\t\t1. By Book Name\n\n\t\t2. By Book's ID\n";
        cout<<"\n\t\tEnter Your Choice : ";
        cin>>i;
        fflush(stdin);

        if (i==1)
        {
            system("cls");
            cout<<"\n\t\tEnter Book Name : ";
            cin.getline(st1,100);
            ofstream outf("E:\\vs c++ programming\\Library Data\\temp.txt",ios::app|ios::binary);
            ifstream intf("E:\\vs c++ programming\\Library Data\\Booksdata.txt",ios::binary);
            intf.read((char *)this,sizeof(*this));

            while (!intf.eof())
            {
                for (i=0;b==B&&bookname[i]!='\0'&&(st1[i]!='\0'&&st1[i]==bookname[i]||st1[i]==bookname[i]+32);i++);

                if(bookname[i]=='\0'&&st1[i]=='\0')
                {
                    cont++;
                    intf.read((char *)this,sizeof(*this));
                }

                else
                {
                    outf.write((char *)this,sizeof(*this));
                    intf.read((char *)this,sizeof(*this));
                }
            }

            intf.close();
            outf.close();
            remove("Booksdata.txt");
            rename("temp.txt","Booksdata.txt");
        }

        else if (i==2)
        {
            cout<<"\n\t\tEnter Book's ID : ";
            cin.getline(st1,100);
            ofstream outf("E:\\vs c++ programming\\Library Data\\temp.txt",ios::app|ios::binary);
            ifstream intf("E:\\vs c++ programming\\Library Data\\Booksdata.txt",ios::binary);
            intf.read((char *)this,sizeof(*this));

            while (!intf.eof())
            {
                for (i=0;b==B&&sc[i]!='\0'&&)
            }
        }
    }
}