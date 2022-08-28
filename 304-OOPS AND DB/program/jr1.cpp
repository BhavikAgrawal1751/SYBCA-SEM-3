#include<iostream>
using namespace std;
class event // event is the class
{
	public:
	event() // event() is Constructor
	{
		cout<<"Constructor Called"<<endl;
	}
	~event() // ~event() is Destructor
	{
		cout<<"Destructor Called"<<endl;
	}
};
int main()
{
//	clrscr();
	event *a=new event[2];

	//new is use to create the objects dynamically
	delete[] a;
	//delete is use to release the memory of created objects
	//getch();
	return(0);
}
