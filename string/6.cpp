#include<stdio.h>
#include<string.h>
int main()
{
	char c[30];
	printf("Enter the uppercase string:\n");
	gets(c);
	printf("upper to lower\n");
	printf("before convert %s\n",c);
	strlwr(c);
	printf("after convert %s\n",c);
	return 0;
}
