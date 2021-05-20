#include<stdio.h>
int binary_search(int a[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (a[mid] == x)
        return mid;

        else if (a[mid] > x)
        return binary_search(a, l, mid - 1, x);

        return binary_search(a, mid + 1, r, x);
    }
    return -1;
}

int main(void)
{
    int a[10];
    printf("Enter the elements in array: ");
    for(int i = 0; i < 20; ++i) {
     scanf("%d", &a[i]);}
    int x;
    printf("Enter number to find in array: ");
    scanf("%d", &x);
    int n = sizeof(a) / sizeof(a[0]);
    int result = binary_search(a, 0, n - 1, x);
    (result == -1) ? printf("Element is not present. ") : printf("Element is  present: %d", result);

    return 0;
}