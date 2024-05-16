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
	struct library temp;
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
		
	printf("\n\nArrange book in asending order to the id:");
	
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			if(lib[i].id>lib[j].id)
			{
				temp=lib[i];
				lib[i]=lib[j];
				lib[j]=temp;
			}
		}
		
	}
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<3;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
	return 0;
}
