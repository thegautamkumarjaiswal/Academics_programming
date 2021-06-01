// Aim – Write a program to add, subtract ,multiply and divide with the help of inline function in a class. //

#include<iostream>
using namespace std;

class average
{
int a,b,c;
int avg;
public:
void setdata();
void getdata();

};

inline void average :: setdata()
{
cout<< "enter the value of a : "<<endl;
cin>> a;
cout<<"enter the value of b : "<<endl;
cin>> b;

cout<<"enter the value of c : "<<endl;
cin>> c;
}

inline void average ::getdata()
{
avg = (a+b+c)/3;
cout<<"the average value is : "<<avg<<endl;

}
int main()
{
average c;
c.setdata();
c.getdata();
return 0;
}