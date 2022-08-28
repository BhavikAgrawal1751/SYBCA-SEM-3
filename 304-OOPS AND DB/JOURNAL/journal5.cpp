#include <iostream>
using namespace std;
class event
{
private:
  string name;
public:
  // constructor initializes the event
  event()
  {
    cout << "Enter the Event Name ";
    cin >> name;
  }
  void getevent()
  {
    cout << "The Event Name is " << name << endl;
  }
};
int main()
{
  // dynamically declare event object
  event *ptr = new event();
  // call getevent() function
  ptr->getevent();
  // ptr memory is released
  delete ptr;
  return 0;
}
