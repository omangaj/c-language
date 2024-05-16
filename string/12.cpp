#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("Enter the string:\n");
	gets(a);
	int i,flag=0; 
	strcpy(b,a);
	strrev(b);
	puts(a);
	puts(b);
	
	flag=0;
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i])
			flag=1;
	}
	if(flag==0)
		printf("\nThis is palindrome");
	else 
		printf("\nThis is not palindrome");
	return 0;
}
