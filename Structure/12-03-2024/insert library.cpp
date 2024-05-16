#include<stdio.h>
#include<string.h>
struct library
{
	int id,price;
	char name[10],author[10];
};
int main()
{
	struct library lib[4];
	int i,j,index;
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
		
	printf("\nEnter name to want to index:\n");
	scanf("%s",&sname);
	
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].name,sname)==0)
		{
			i=index;
		}	
	}
	
	for(i=3;i>index;i--)
	{
		lib[i]=lib[i-1];	
	}
	printf("insert id name price and auther to index %d\n",index);
	scanf("%d",&lib[index].id);
	_flushall();
	gets(lib[index].name);
	_flushall();
	scanf("%d",&lib[index].price);
	_flushall();
	gets(lib[index].author);
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<4;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
	return 0;
}
