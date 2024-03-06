#include<stdio.h>
int main()
{
	int num=0, rev=0, rem=0, temp=0;
	int *p, *q, *r, *t;
	p = &num;
	q = &rev;
	r = &rem;
	t = &temp;
	printf("\n Enter a number: ");
	scanf("%d",p);
	//temp = num;
	*t = *p;
	while(*p>0)
	{
		//rem = num%10;
		*r = *p%10;
		*q = *q*10+*r;
		*p = *p/10;
	}
	if(*t==*q)
	{
		printf("\n palindrome");
	}
	else
	{
		printf("\n non palindrome");
	}
}
