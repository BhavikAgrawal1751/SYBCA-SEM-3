#include <iostream>
using namespace std;
class Box
{

public:
    double l;
    double h;
    double b;
};
int main()
{
    Box box1;
    Box box2;
    double volume;

    box1.h = 5.0;
    box1.l = 6.0;
    box1.b = 7.0;

    box2.h = 10.0;
    box2.l = 12.0;
    box2.b = 13.0;

    // Volume of box1
    volume = box1.h * box1.l * box1.b;
    cout << "Volume For box1 = " << volume << endl;

    // Volume of box2
    volume = box2.h * box2.l * box2.b;
    cout << "Volume For box2 = " << volume;
}