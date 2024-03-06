// Pointer
#include<stdio.h>
int test(char[]);
int main()
{
	char arr[50];
	int result;
	printf("Enter word: ");
	gets(arr);
	result=test(arr);
	printf("\n The total no of character is %d", result);
	return 0;
}
int test(char a[])
{
	int i=0,count=0;
	for (i=0;a[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
