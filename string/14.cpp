#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("Enter the string:\n");
	gets(a);
	char c;
	int i,index,flag=0;
	printf("Enter the character first occurence:");
	scanf("%c",&c);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==c)
		{
			index=i;
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\nfirst occurence %c on index %d",c,index);
	else 
		printf("\ncharacter not found");
	return 0;
}
