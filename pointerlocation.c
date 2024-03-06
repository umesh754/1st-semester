#include<stdio.h>
int main()
{
	int *p;
	int x=10;
	p = &x;
	printf("address of x is %d",x);
	printf("\naddress of x is %d",*p);
	printf("\naddress of x is %p",&x);
	printf("\n value of p is %p",p);
	printf("\n value of *(&p) is %p",*(*p));
	return 0;
	
}
