/* C program to calculate aggretate marks and percentage of five subjects of students*/
#include<stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, tm;
    int s1_mm, s2_mm, s3_mm, s4_mm, s5_mm, ag_max_mark, ag_mark, per;
    printf("Enter the marks in five subjects:");        /* Marks in subjects*/
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    printf("Enter the maximum marks in per subject: ");     /* Total marks in subjects*/
    scanf("%d%d%d%d%d", &s1_mm, &s2_mm, &s3_mm, &s4_mm, &s5_mm);
    ag_mark = s1+s2+s3+s4+s5;
    ag_max_mark = s1_mm+s2_mm+s3_mm+s4_mm+s5_mm;
    per = ag_mark*100/ag_max_mark;
    printf("Aggregate marks: %d", ag_mark);     /*Aggregate marks */
    printf("\nAggregate maximum marks: %d\n", ag_max_mark);     /* Aggregate maximum marks */
    printf("\nPercentage: %d", per);        /* Percentage of student */
}