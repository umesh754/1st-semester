#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p, n=0, i=0, sum=0, *q;
	printf("Enter how many number? ");
	scanf("%d", &n);
	p = (int *)calloc(n,sizeof(int));
	if (p==NULL)
	{
		printf("Out of memory!!!");
		exit(0);
	}
	q = &sum;
	for (i=0; i<n;i++)
	{
		printf("\n Enter the number");
		scanf("%d",p+i);
		*q = *q+*(p+i);
	}
	printf("\n The sum is %d", *q);
	return 0;
	
}
