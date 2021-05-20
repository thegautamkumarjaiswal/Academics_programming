#include<stdio.h> /* Header file */
#include<conio.h>
void main()   /* main function */
{
    /* Ramesh's gross salary */
    int sal, da, hra, gs;
    printf("Enter the Ramesh's basic salary: ");
    scanf("%d", &sal);
    da = 0.4*sal;       /* dearness allowance in basic salary is 40% */
    hra = 0.2*sal;      /* house rent allowance in basic salary is 20% */
    gs = sal+da+hra;    /* formula */
    printf("%d", gs);   /* print gross salary */
}