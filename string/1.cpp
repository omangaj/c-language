#include<stdio.h>
#include<string.h>
int main()
{
	char c[30];
	printf("Enter the string:\n");
	gets(c);
	int count=strlen(c);
	
	printf("%d",count);
	return 0;
}
