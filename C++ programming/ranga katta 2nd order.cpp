#include<iostream>
#include<cmath>

using namespace std;
float f(float (x), float (y))
{
    return (y - x);
}
int main()
{
    int x, i, j;
    float h;
    cout << "Aim: To solve a Diffrential Equation by second order Ranga Kutta Method.";
    cout << "given equation is dy/dx = y - x. " << endl;

    cout << "Enter the number of solutions: " << endl;
    cin >> x;
    cout << "Enter the value of step size: " << endl;
    cin >> h;

    long double y[x], e[x], Y[x], L[x], k[x][x], x[x];

    cout << "Enter the value of x0: " << endl;
    cin >> x[0];

    cout << "Enter the value of y0: " << endl;
    cin >> y[0];

    for (i=1; i<=x; i++)
    {
        x[i] = x[i - 1] + h;
    }
    cout<<" Solution of the given differential equation is "<<end1;

    for (j =1; j<=x; j++)
    {
        k[1][j] = h * (x[j - 1], y[j - 1]);
        cout<<"k[1] =" << k[1][j] << "\t";
        k[2][j] = h * j(x[j - 1] + h, y[j - 1] + k[1][j]);
        cout<<"k[2] ="<< k[2][j]<<"\n";
        y[j] = y[j - 1] + ((k[1][j] k[2][j])/2);
        cout<<" y["<<h * j<<"]="<< setprecision (5)
    }
}