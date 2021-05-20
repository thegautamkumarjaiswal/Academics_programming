#include<stdio.h>
int Pro_los(int cp, int sp)
{
    int p, l;
    p = sp - cp;
    l = cp - sp;
    if (sp > cp)
    printf("%d.rs profit", p);
    else if (sp < cp)
    printf("%d.rs loss", l);
    else
    printf("Not profit nor loss.");
};



int main()
{
    int cp, sp;
    printf("Enter the cost price of a item in rupees: ");
    scanf("%d", &cp);
    printf("Enter the selling price of an item in rupees: ");
    scanf("%d", &sp);
    int r = Pro_los(cp, sp);
    printf("", r);
};