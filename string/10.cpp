#include<stdio.h>
#include<string.h>
int main()
{
	char c[50];
	printf("Enter the string:\n");
	gets(c);
	int i,count=0;
	
	for(i=0;c[i]!='\0';i++)
	{
	if(c[i]!=' ')
		count++;
	}
	
	printf("count=%d",count);
	return 0;
}
