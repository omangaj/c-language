#include<stdio.h>
#include<string.h>
struct library
{
	int id,price;
	char name[10],author[10];
};
int main()
{
	printf("omkar");
	struct library lib[5];
	int i,flag=0,index,uid;
	
	for(i=0;i<5;i++)
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
	for(i=0;i<5;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
		
	printf("\n\nEnter id to find:");
	scanf("%d",&uid);
	
	for(i=0;i<5;i++)
	{
		if(lib[i].id==uid)
		{
			flag=1;
			index=i;
			printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
			
			printf("\nEnter new values to index %d:\n",index);
			scanf("%d",&lib[index].id);
			_flushall();
			gets(lib[index].name);
			_flushall();
			scanf("%d",&lib[index].price);
			_flushall();
			gets(lib[index].author);
		}	
	}
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<5;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
	return 0;
}
