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
	int c=strlen(a);
	for(i=c,j=0;b[j]!='\0';i++,j++)
	{
		a[i]=b[j];
	}
	a[i]='\0';
	printf("%s",a);
	return 0;
}

