#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	int i,j;
	printf("Enter the first string:");
	gets(a);
	printf("Enter the second string:");
	gets(b);
	int compare=strcmp(a,b);
	if(compare==0)
		printf("string are equal");
	else
		printf("strings are not equal");
	return 0;
}

