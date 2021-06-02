// Aim – Write a program to perform addition of two complex numbers
// using constructor overloading. The first constructor which takes no
// argument is used to create objects which are not initialized, second
// which takes one argument is used to initialize real and imaginary parts
// to equal value and third which takes two arguments is used to initialize
// real and imaginary part to two different values. //

#include<iostream>
#include<conio.h>

using namespace std;

class complex
{
private:
double real;
double imag;
public:
complex();
complex(double a);
complex(double x,double y);
void add(complex c1,complex c2);
void show();
};

complex::complex()
{
real=0.0;
imag=0.0;
}

complex::complex(double a)
{
real=a;
imag=a;
}

complex::complex(double x,double y)
{
real=x;
imag=y;
}

void complex::add(complex c1,complex c2)
{
real=c1.real+c2.real;
imag=c1.imag+c2.imag;
}

void complex :: show()
{
    if (imag > 0)
    {
        cout<< real<< " + "<< imag<<"i"<< endl;
    }
    else
    {
        cout<< real<< imag<< "i"<< endl;
    }
};

int main()
{
    complex c1(6, 8);
    complex c2(5);
    complex c3;
    c3.add(c1, c2);
    cout<< "First complex number is "<<endl;
    c1.show();
    cout<< "Second complex number is "<<endl;
    c2.show();
    cout<< "Sum is "<<endl;
    c3.show();
    getch();
    }