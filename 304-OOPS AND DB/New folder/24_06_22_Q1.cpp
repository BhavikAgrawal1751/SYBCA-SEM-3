// Add of two Matries
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int r = 2, c = 4, sum[2][4], i, j;
    int a[2][4] = {{1, 5, 9, 4}, {3, 2, 8, 3}};
    int b[2][4] = {{6, 3, 8, 2}, {1, 5, 2, 9}};
    // std::cout<<"The First Matrix is : "<<std::endl;
    cout << "The First Matrix is : " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    cout << "The Second Matrix is : " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << b[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j]=a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
           cout<<"Sum of the two Matries is : ";
           cout<<sum[i][j]<<" "; 
           cout<<endl;
        }
    }
}