#include<stdio.h>
#include<string.h>
struct library
{
	int id,price;
	char name[10],author[10];
};
int main()
{
	struct library lib[3];
	int i,j,flag=0,count=0;
	char sname[10];
	
	for(i=0;i<3;i++)
	{
		printf("\nEnter book id name price and auther name:\n");
		scanf("%d",&lib[i].id);
		_flushall();
		gets(lib[i].name);
		_flushall();
		scanf("%d",&lib[i].price);
		_flushall();
		gets(lib[i].author);
	}

	printf("\nlibrary is\n");
	printf("id	name	price	author");
	for(i=0;i<3;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
		
	printf("\nEnter name to delete book:");
	scanf("%s",&sname);
	
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].name,sname)==0)
		{
			for(j=i;j<3;j++)
			{
				lib[j]=lib[j+1];
			}
			count++;
		}	
	}
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<3-count;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
	return 0;
}
