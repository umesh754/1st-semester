#include<stdio.h>

int sum_array(int[], int);
int main()
{
	int result=0, a[100], n=0, i=0;
	printf("\n Enter how many numbers you want in array? ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		printf("\n Enter a[%d] element: ",i);
		scanf("%d",&a[i]);
	}
	result = sum_array(a,n);//unction call
	printf("\n sum of numbers of array is %d", result);
	return 0;
}
int sum_array(int m[], int x)//function defination
{
	int sum=0, i=0;
	for (i=0;i<x; i++)
	{
		sum = sum+m[i];
	}
	return sum;
}
