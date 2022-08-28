#include<iostream.h>
class A
{
	public:
	
virtual	void display()
	{
		int x=5;
		cout<<"value of x"<<x;
	}
};
class B:public A
{
	
	public:
	void display()
	{
		int y=5;
		cout<<"value of y"<<y;
	}
};
int main()
{
	A *bptr;
	B b;
	bptr=&b;
	bptr->display();
//b.display();
return 0;
}

