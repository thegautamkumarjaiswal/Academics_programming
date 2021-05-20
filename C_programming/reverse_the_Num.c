/* Reverse the number */
#include<stdio.h>
/* Initialize function */
int reverse_digit(int num)
{
    int rev_num = 0;
    while (num > 0){
        rev_num = rev_num * 10 + num% 10;       /* Reverse formula */
        num = num/10;
    }
    return rev_num;     /* return the reverse value */
}

/* Main function */
int main()
{
    int num = 2345;
    printf("reverse: %d", reverse_digit(num));
}