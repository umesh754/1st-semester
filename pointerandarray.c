//pointer and arrays
// if p = a it will be take a0 block and if p = a[1] it will take 2nd block.
#include<stdio.h>
int main()
{
	int *p, i=0, a[5];
	for (i=0; i<5;i++)
	{
		printf("\n Enter a[%d] element: ", i);
		scanf("%d", &a[i]);
	}
	p = &a[0];
	for(i=0;i<5;i++)
	{
		printf("a[%d] element is %d",i,*(p+i));
	}
	return 0;
}
