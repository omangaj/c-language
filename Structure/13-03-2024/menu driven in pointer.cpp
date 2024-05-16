#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct library
{
	int id,price;
	char name[10],author[10];
};
void display(struct library*);


int i,j,size;
int main()
{
	struct library* l;
	int i,j,choice,C;
	
	printf("omkar");
	do{
	printf("\nchoice\n1.add library\n2.display library\n3.update library\n4.delete library\n5.insert library\n6.sort\n7.highest price book\n8.min to max price books");
	printf("\nEnter choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		{
			printf("Enter the Size of record: ");
			scanf("%d",&size);
			l=(struct library*)malloc(sizeof(struct library)*size);
			for(i=0;i<size;i++)
			{
			printf("\nEnter book id name price and auther name:\n");
			scanf("%d",&l[i].id);
			_flushall();
			gets(l[i].name);
			_flushall();
			scanf("%d",&l[i].price);
			_flushall();
			gets(l[i].author);
	}

	printf("\nlibrary is\n");
	printf("id	name	price	author");
	for(i=0;i<size;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
		}
	break;
	case 2:
		{
			display(l);
		}
	break;
	default :
			printf("\nInvalid choice");
	break;
	}
	printf("\ndo you want to cantinue switch say 1 (yes=1/no=0):");
	scanf("%d",&C);
	}while(C==1);
	
	
	return 0;
}

void display(struct library *l)
{
	printf("\nDisplay all library data\n");
	printf("\nId	Name	Price	Author\n");
	for(i=0;i<size;i++)
	{
		printf("%d	%s	%d	%s\n",l[i].id,l[i].name,l[i].price,l[i].author);	
	}	
}



