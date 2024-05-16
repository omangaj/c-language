 #include<stdio.h>
#include<string.h>
int main()
{
	char c[50];
	printf("Enter the string:\n");
	gets(c);
	
	strrev(c);
	
	printf("%s",c);
	return 0;
}
