#include <iostream>
#include <conio.h>
using namespace std;

class Test {
    int n, i, f;
    public:
    Test(){
        cout << "Enter a number: ";
        cin >> n;
        
        f = 1;

        for (i=1; i<=n; i++){
            f = f * i;
        }
    }
    void display(){
        cout << "Factorial is: "<< f;
    }
};

int main()
{
    Test obj;
    obj.display();
}