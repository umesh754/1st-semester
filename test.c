#include<stdio.h>
int main()
{
    int a, b, result;
    printf("Enter the 1st digit: ");
    scanf("%d", &a);
    printf("Enter the 2nd digit: ");
    scanf("%d", &b);
    result = a + b;
    printf("Therefore the total sum is %d", result);
    return 0;
}
