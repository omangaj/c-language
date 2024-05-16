#include<stdio.h>
#include<string.h>
struct library
{
	int id,price;
	char name[10],author[10];
}lib[3],temp;

int i,j,choice,flag=0,index,count=0,dcount=0,z,sid,sprice,max,mn,mx;
char C,sname[10],sauthor[10];
	
void find_count();
void count_id();
void count_name();
void count_price();
void count_author();

void display();
void display_id();
void display_name();
void display_price();
void display_author();

void update();
void update_id();
void update_name();
void update_price();
void update_author();

void delete1();
void delete1_id();
void delete1_name();
void delete1_price();
void delete1_author();

void insert();
void insert_id();
void insert_name();
void insert_price();
void insert_author();

void sort();
void sort_id();
void sort_price();

void heighest_price();
void mn_to_mx_price();

int main()
{
	
	
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
	do{
		printf("\nchoice\n1.find count library\n2.display library\n3.update library\n4.delete library\n5.insert library\n6.sort\n7.highest price book\n8.min to max price books");
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				find_count();
			}
		break;
		case 2:
			{
				display();
			}
		break;
		case 3:
			{
				update();	
			}
		break;
		case 4:
			{
				delete1();
			}
		break;
		case 5:
			{
				insert();
			}
		break;
		case 6:
			{
				sort();
			}
		break;
		case 7:
			{
				heighest_price();
			}
		break;
		case 8:
			{
				mn_to_mx_price();
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

void find_count()
{
	
			int c;
			int count=0;
			do{
			printf("\nchoice\n1.count to id\n2.count to name\n3.count to price\n4.count to author");
			printf("\nEnter choice:");
			scanf("%d",&choice);
			switch(choice)
			{
			case 1:
				{
					count_id();
				}
			break;
			case 2:
				{
					count_name();
				}
			break;
			case 3:
				{
					count_price();
				}
			break;
			case 4:
				{
					count_author();
				}
			break;
			default :
				printf("\nInvalid choice");
			break;
			}
		printf("\ndo you want to cantinue update say (yes=1/no=0)");
		scanf("%d",&c);
		}while(c==1);
}

void count_id()
{
	printf("\nEnter id to find:");
	scanf("%d",&sid);

	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		if(lib[i].id==sid)
		{
			count++;
			printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);						
		}
	}
	printf("\ncount of id %d in library is %d\n",sid,count);
}
void count_name()
{
	printf("\nEnter name to find:");
	scanf("%s",&sname);
					
	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].name,sname)==0)
		{
			count++;
			printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);					
		}
	}
	printf("\ncount of name %s in library is %d\n",sname,count);
}
void count_price()
{
	printf("\nEnter price to find:");
	scanf("%d",&sprice);
	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		if(lib[i].id==sid)
		{
			count++;
			printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);						
		}
	}
	printf("\ncount of price %d in library is %d\n",sprice,count);
}
void count_author()
{
	printf("\nEnter author to find:");
		scanf("%s",&sauthor);
					
	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].author,sauthor)==0)
		{
			count++;
			printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);					
		}
	}
	printf("\ncount of author %s in library is %d\n",sauthor,count);
}

void display()
{
	int D;
			do{
			printf("\nchoice\n1.display to id\n2.display to name\n3.display to price\n4.display to author");
			printf("\nEnter choice:");
			scanf("%d",&choice);
			switch(choice)
			{
			case 1:
				{
					display_id();
				}
			break;
			case 2:
				{
					display_name();

				}
			break;
			case 3:
				{
					display_price();
				}
			break;
			case 4:
				{
					display_author();
				}
			break;
			default :
				printf("\nInvalid choice");
			break;
			}
		printf("\ndo you want to cantinue update say 2\n");
		scanf("%d",&D);
		}while(D==2);
}

void display_id()
{
	printf("\nEnter id to find:");
	scanf("%d",&sid);

	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		if(lib[i].id==sid)
		{
			flag=1;
			printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);						
		}
	}
}
void display_name()
{
	printf("\nEnter name to find:");
	scanf("%s",&sname);
					
	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].name,sname)==0)
		{
			flag=1;
			printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);						
		}
	}
}
void display_price()
{
	printf("\nEnter price to find:");
	scanf("%d",&sprice);

	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		if(lib[i].price==sprice)
		{
			flag=1;
			printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);						
		}
	}
}
void display_author()
{
	printf("\nEnter author to find:");
	scanf("%s",&sauthor);
	
	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].author,sauthor)==0)
		{
			flag=1;
			printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);					
		}
	}
}

void update()
{
	int u;
			do{
				printf("\nchoice\n1.update to id\n2.update to name\n3.update to price\n4.update to author");
				printf("\nEnter choice:");
				scanf("%d",&choice);
				switch(choice)
				{
				case 1:
					{
						update_id();
					}
				break;
				case 2:
					{
						update_name();
					}
				break;
				case 3:
					{
					
						update_price();
					}
				break;
				case 4:
					{
						
					}
				break;
				default :
					printf("\nInvalid choice");
				break;
				}
			printf("\ndo you want to cantinue update say(yes=3/no=0)");
			scanf("%d",&u);
			}while(u==3);
}

void update_id()
{
	printf("\n\nEnter id to find:");
	scanf("%d",&sid);
	
	for(i=0;i<3;i++)
	{
		if(lib[i].id==sid)
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
	for(i=0;i<3;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
}
void update_name()
{
	printf("\n\nEnter name to find:");
	scanf("%s",&sname);
	
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].name,sname)==0)
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
	for(i=0;i<3;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
}
void update_price()
{
	printf("\n\nEnter price to find:");
	scanf("%d",&sprice);
	
	for(i=0;i<3;i++)
	{
		if(lib[i].price==sprice)
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
	for(i=0;i<3;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
}
void update_author()
{
	printf("\n\nEnter author to find:");
	scanf("%s",&sauthor);
	
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].author,sauthor)==0)
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
	for(i=0;i<3;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
}

void delete1()
{
	int d;
			do{
				printf("\nchoice\n1.delete to id\n2.delete to name\n3.delete to price\n4.delete to author");
				printf("\nEnter choice:");
				scanf("%d",&choice);
				switch(choice)
				{
				case 1:
					{
						delete1_id();
					}
				break;
				case 2:
					{
						delete1_name();
					}
				break;
				case 3:
					{
						delete1_price();
					}
				break;
				case 4:
					{
						delete1_author();
					}
				break;
				default :
					printf("\nInvalid choice");
				break;
				}
			printf("\ndo you want to cantinue update say (yes=4/no=0):");
			scanf("%d",&d);
			}while(d==4);
}

void delete1_id()
{
	printf("\nEnter id to find book:\n");
	scanf("%d",&sid);
	
	for(i=0;i<3;i++)
	{
		if(lib[i].id==sid)
		{
			for(j=i;j<3;j++)
			{
				lib[j]=lib[j+1];
			}
			dcount++;
		}	
	}
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<3-dcount;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
}
void delete1_name()
{
	printf("\nEnter name to find book:\n");
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
}
void delete1_price()
{
	printf("\nEnter price to find book:\n");
	scanf("%d",&sprice);
	
	for(i=0;i<3;i++)
	{
		if(lib[i].price==sprice)
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
}
void delete1_author()
{
	printf("\nEnter author to find book:\n");
	scanf("%s",&sauthor);

	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].author,sauthor)==0)
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
}

void insert()
{
	int I;
			do{
				printf("\nchoice\n1.insert to id\n2.insert to name\n3.insert to price\n4.insert to author");
				printf("\nEnter choice:");
				scanf("%d",&choice);
				switch(choice)
				{
				case 1:
					{
						insert_id();
					}
				break;
				case 2:
					{
						insert_name();
					}
				break;
				case 3:
					{
						insert_price();
					}
				break;
				case 4:
					{
						insert_author();
					}
				break;
				default :
					printf("\nInvalid choice");
				break;
				}
			printf("\ndo you want to cantinue update say (yes=5/no=0)");
			scanf("%d",&I);
			}while(I==5);
}

void insert_id()
{
	printf("\nEnter id to want to index:\n");
	scanf("%d",&sid);
	
	for(i=0;i<3;i++)
	{
		if(lib[i].id==sid)
		{
			i=index;
			count++;
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
	z=dcount-count;
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<3+z;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
}
void insert_name()
{
	printf("\nEnter name to want to index:\n");
	scanf("%s",&sname);
	
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].name,sname)==0)
		{
			i=index;
			count++;
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
	z=dcount-count;
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<3+z;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
}
void insert_price()
{
	printf("\nEnter price to want to index:\n");
	scanf("%d",&sprice);
	
	for(i=0;i<3;i++)
	{
		if(lib[i].price==sprice)
		{
			i=index;
			count++;
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
	z=dcount-count;
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<3+z;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
}
void insert_author()
{
	printf("\nEnter author to want to index:\n");
	scanf("%s",&sauthor);
	
	for(i=0;i<3;i++)
	{
		if(strcmp(lib[i].author,sauthor)==0)
		{
			i=index;
			count++;
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
	z=dcount-count;
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<3+z;i++)
	{
		printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
	}
}

void sort()
{
	int s;
			do{
			printf("\nchoice\n1.sort to id\n2.sort to price\n");
			printf("\nEnter choice:");
			scanf("%d",&choice);
			switch(choice)
			{
			case 1:
				{
					sort_id();
			 	}
			break;
			case 2:
				{
					sort_price();
				}
			break;
			default :
				printf("\nInvalid choice");
			break;
			}
			printf("\ndo you want to cantinue update say (yes=6/no=0)\n");
			scanf("%d",&s);
			}while(s==6);
}
void sort_id()
{
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
}
void sort_price()
{
	printf("\n\nArrange book in asending order to the price:");
	
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			if(lib[i].price>lib[j].price)
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
}

void heighest_price()
{
	printf("\n\nArrange book in ascending order to the id:");
			max=lib[0].price;
	
			for(i=0;i<3;i++)
			{
				if(max<lib[i].price)
				{
					max=lib[i].price;
					index=i;	
				}
			}
	
			printf("\nnew heighest price book is\n");
			printf("id	name	price	author");
			printf("\n%d	%s	%d	%s",lib[index].id,lib[index].name,lib[index].price,lib[index].author);
			
}

void mn_to_mx_price()
{
	printf("\n\nEnter minimum price and maximum price to find all books:");
			scanf("%d %d",&mn,&mx);
			printf("min=%d max=%d",mn,mx);
	
			for(i=0;i<3;i++)
			{
				if(mn<=lib[i].price && mx>=lib[i].price )
				{
					printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);	
				}
			}
}
