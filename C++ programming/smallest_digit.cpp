#include <iostream>
#include <conio.h>
using namespace std;

#define smallest(a, b) ((a<b)?a:b)

int main()
{
    int a, b;
    cout <<"Enter first number: ";
    cin >> a;
    cout <<"Enter second number: ";
    cin >> b;
    cout << "Smallest: "<< smallest(a, b);
    getch();
}