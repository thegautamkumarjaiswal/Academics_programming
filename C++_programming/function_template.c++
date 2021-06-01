// Write a Program to define function template for calculating the sum and product of givien number with different datatype. //

#include<iostream>
using namespace std;

template< typename T1, typename T2 >
T2 product(T1 x, T2 y)
{
    return (T2)(x * y);
}

template< typename T >
T sum (T x, T y)
{
    return x + y;
}

int main()
{
    cout<< "Product 1: "<< product(3, 4.7)<< endl;
    cout<< "Product 2: "<< product(4, 5.6)<< endl;
    cout<< "Sum 1: "<< sum(3, 5)<<endl;
    cout<< "Sum 2: "<< sum(3.0, 5.2)<< endl;
    cout<< "Sum 3: "<< sum(2.34324, 5.24144)<< endl;
    return 0;
}