#include<stdio.h>
int od_eve(int x)
{
    if (x % 2 == 0)
    printf(" %d is a prime number.", x);
    else
    printf(" %d is an odd number.", x);
}

int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int r = od_eve(x);
    printf("", r);
}