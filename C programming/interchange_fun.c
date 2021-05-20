/* Interchange the numbers */
#include<stdio.h>
int main()
{
    int c, d, e;
    printf("enter the value of c and d:");
    scanf("%d%d", &c, &d);
    e = c;
    c = d;
    d = e;
    printf("c=%d\nd=%d", c, d);
}