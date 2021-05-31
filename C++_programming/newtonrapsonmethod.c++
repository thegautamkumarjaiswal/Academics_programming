#include<iostream>

using namespace std;
#define EPSILON 0.001

double func(double x)
{
    return x * x * x - 2 * x - 5;
}

double derivfunc(double x)
{
    return 3 * x * x - 2;
}

double newtonsapsonmethod(double x)
{
    double h = func(x) / derivfunc(x);
    while (func(x) >= EPSILON)
    {
        h = func(x) / derivfunc(x);
        x = x - h;
    }
    return x;
};

int main()
{
    double x0 = 3, x;
    cout<< "\nEntered equation is: "<< "x^3 - 2*x - 5";
    x = newtonsapsonmethod(x0);
    cout<< " \n\t Root of equation is: "<<x;
    return 0;
}