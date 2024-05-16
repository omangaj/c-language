#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[20];
	printf("Enter the string:\n");
	gets(a);
	char c;
	int l,i,j,index,flag=0;
	printf("Enter the character to find all occurence\n");
	scanf("%c",&c);
	
	for(i=0,j=0;a[i]!='\0';i++)
	{
		if(a[i]==c)
		{
			b[j]=i;
			j++;
			flag=1;
		}
	}	
	if(flag==1)
	{
		printf("\nall occurence %c on index:",c);
		for(i=0;i<j;i++)
			printf("%d\t",b[i]);
	}
	else 
	{
		printf("character not found");
	}
	return 0;
}
