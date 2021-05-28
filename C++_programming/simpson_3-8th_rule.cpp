// C++ program to find (1 / (1 + x^2))dx using Simpson's 3/8th rule //
#include<iostream>

using namespace std;

float y(float x){
    return 1 / (1 + x*x);
}

float simpsons_third_eight(float a, float b, float n){
    float h = (b - a) / n;
    float s = 0;
    for (int i=0; i<=n; i++)
    {
        if (i == 0 || i ==n)
        s = s + y(a +i * h);
        else if (i % 3 == 0)
        s = s + 2 * y(a + i * h);
        else
        s = s + 3 * y(a + i * h);
        cout << "\nS" <<i << "="<< y(a + i * h);
    }
    return (3 * h / 8) * s;
}

// Main function //
int main(){
    float x0 = 0, xn = 1;
    int n = 6;
    cout << "Simpson's 3/8th Rule\n";
    cout <<"\nValue of integral is: " <<simpsons_third_eight(x0, xn, n);
    return 0;
}
