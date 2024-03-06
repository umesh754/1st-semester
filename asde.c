//Recursion
// If a function is called repeatedly until a certain condition is made then the phenomenon is known as recursion.
//OR
//if a function is called repeatedly again and again within its defination till a certain condition is made.
/*#include<stdio.h>
int sum(int, int);
int main()
{
    int a, b;
    printf("Enter the value for a and b: ");
    scanf("%d %d",&a, &b);
    printf("The sum is %d", sum(a,b));
    return 0;
}
int sum(int m, int n)
{
    int z;
    z = m + n;
    return z;
} */
/*#include<stdio.h>
int sum(int);
int main
{
	
	return 0;
}
int sum(int n)
{
	if (n != 0)
	{
		return n * sum(n-1);
	}
	else
	{
		return n;
	}
}*/
// WAP to generate phebonatic series up to n terms using recursion
// WAP to find;
//a: sum of natural number till n
//b: product of n natural number.
#include<stdio.h>
int sum(int);
int main()
{
	int result, num;
	printf("Enter the value for n: ");
	scanf("%d", &num);
	result = sum(num);
	printf("sum = %d", result);
	return 0;
}
int sum(int m)
{

	if (m!= 0)
	{
		return m + sum(m-1);
	}
	else
	{
		return 0;
	}
}

