#include<stdio.h>
int SI(int, int, int);
int main()
{
    int p, t, r, result;
    printf("Enter the principle: ");
    scanf("%d", &p);
    printf("Enter the time: ");
    scanf("%d", &t);
    printf("Enter the rate: ");
    scanf("%d", &r);
    result = SI(p,t,r);
    printf("Therefore the SI is %d", result);
    return 0;
}
int SI(int a, int b, int c)
{
    int z;
    z = (a*b*c)/100;
    return z;
    exit (0);
}
