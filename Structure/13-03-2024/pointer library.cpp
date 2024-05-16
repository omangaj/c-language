#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct library
{
	int id,price;
	char name[10],author[10];
}temp;

void display(struct library*);

void sid(struct library*);
void sname(struct library*);
void sprice(struct library*);
void sauthor(struct library*);

void uid(struct library*);
void uname(struct library*);
void uprice(struct library*);
void uauthor(struct library*);

void did(struct library*);
void dname(struct library*);
void dprice(struct library*);
void dauthor(struct library*);

void iid(struct library*);
void iname(struct library*);
void iprice(struct library*);
void iauthor(struct library*);

void Sid(struct library*);
void Sprice(struct library*);

void heighest_price(struct library*);

void mn_to_mx_price(struct library*);
	
void exit(struct library*);

int i,j,size;
int main()
{
	struct library* l;
	int i,j,choice,C,c;
	
	printf("omkar\n");
	do{
	printf("choice\n1.add library\n");
	printf("2.display library\n");
	printf("3.search library\n");
	printf("4.update library\n");
	printf("5.delete library\n");
	printf("6.insert library\n");
	printf("7.sort library\n");
	printf("8.heighest price book\n");
	printf("9.books between price\n");
	printf("10.exit\n");
	
	printf("\nEnter choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		{
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
	case 3:
		{
			do
			{
				printf("\n1. Search book by id");
				printf("\n2. Search book by name");
				printf("\n3. Search book by price");
				printf("\n4.Search book by author");
				printf("\nEnter the Choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						display(l);
						sid(l);
						break;
							
					case 2:
						display(l);
						sname(l);
						break;
							
					case 3:
						display(l);
						sprice(l);
						break;
							
					case 4:
						display(l);
						sauthor(l);
						break;
					default :
						printf("Invalid case:");
						break;
				}
			printf("\nIf you want to continue say 3 otherwise 0: ");
			scanf("%d",&c);
			}
			while(c==3);
		}
	break;
	case 4:
		{
			do
			{
				printf("\n1. update book by id");
				printf("\n2. update book by name");
				printf("\n3. update book by price");
				printf("\n4. update book by author");
				printf("\nEnter the Choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						display(l);
						uid(l);
						break;
							
					case 2:
						display(l);
						uname(l);
						break;
							
					case 3:
						display(l);
						uprice(l);
						break;
							
					case 4:
						display(l);
						uauthor(l);
						break;
					default :
						printf("Invalid case:");
						break;
				}
			printf("\nIf you want to continue say 4 otherwise 0: ");
			scanf("%d",&c);
			}
			while(c==4);	
		}
	break;
	case 5:
		{
			do
			{
				printf("\n1. delete book by id");
				printf("\n2. delete book by name");
				printf("\n3. delete book by price");
				printf("\n4. delete book by author");
				printf("\nEnter the Choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						display(l);
						did(l);
						break;
							
					case 2:
						display(l);
						dname(l);
						break;
							
					case 3:
						display(l);
						dprice(l);
						break;
							
					case 4:
						display(l);
						dauthor(l);
						break;
					default :
						printf("Invalid case:");
						break;
				}
			printf("\nIf you want to continue say 5 otherwise 0: ");
			scanf("%d",&c);
			}
			while(c==5);	
		}
	break;
	case 6:
		{
			do
			{
				printf("\n1. insert book by id");
				printf("\n2. insert book by name");
				printf("\n3. insert book by price");
				printf("\n4. insert book by author");
				printf("\nEnter the Choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						display(l);
						iid(l);
						break;
							
					case 2:
						display(l);
						iname(l);
						break;
							
					case 3:
						display(l);
						iprice(l);
						break;
							
					case 4:
						display(l);
						iauthor(l);
						break;
					default :
						printf("Invalid case:");
						break;
				}
			printf("\nIf you want to continue say 6 otherwise 0: ");
			scanf("%d",&c);
			}
			while(c==6);
		}
	break;
	case 7:
		{
			do
			{
				printf("\n1. sort book by id");
				printf("\n2. sort book by price");
				printf("\nEnter the Choice: ");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						display(l);
						Sid(l);
						break;
								
					case 2:
						display(l);
						Sprice(l);
						break;
						
					default :
						printf("Invalid case:");
						break;
				}
			printf("\nIf you want to continue say 7 otherwise 0: ");
			scanf("%d",&c);
			}
			while(c==7);
		}
	break;
	case 8:
		{
			display(l);
			heighest_price(l);
		}
	break;
	case 9:
		{
			display(l);
			mn_to_mx_price(l);
		}
	break;
	case 10:
		{
			exit(l);
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

void sid(struct library* l)
{
	int sid,flag=0;
	printf("\nEnter id to find:");
	scanf("%d",&sid);

	printf("\nRecord is");
	for(i=0;i<size;i++)
	{
		if(l[i].id==sid)
		{
			flag=1;
			printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);						
		}
	}
	if(flag==0)
		printf("Invalid sid");
}

void sname(struct library* l)
{
	char sname[10];
	int flag=0;
	printf("\nEnter name to find:");
	scanf("%s",&sname);
	
	printf("\nRecord is");
	for(i=0;i<size;i++)
	{
		if(strcmp(l[i].name,sname)==0)
		{
			flag=1;
			printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);						
		}
	}
	if(flag==0)
		printf("Invalid sname");
}

void sprice(struct library* l)
{
	int sprice,flag=0;
	printf("\nEnter price to find:");
	scanf("%d",&sprice);

	printf("\nRecord is");
	for(i=0;i<size;i++)
	{
		if(l[i].price==sprice)
		{
			flag=1;
			printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);						
		}
	}
	if(flag==0)
		printf("Invalid sprice");
}

void sauthor(struct library* l)
{
	char sauthor[10];
	int flag=0;
	printf("\nEnter author to find:");
	scanf("%s",&sauthor);
	
	printf("\nRecord is");
	for(i=0;i<size;i++)
	{
		if(strcmp(l[i].author,sauthor)==0)
		{
			flag=1;
			printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);						
		}
	}
	if(flag==0)
		printf("Invalid sauthor");
}

void uid(struct library* l)
{
	int uid,flag=0,index;
	printf("\nEnter the id to update:");
	scanf("%d",&uid);
	for(i=0;i<size;i++)
	{
		if(l[i].id==uid)
		flag=1;
		i=index;
		printf("Enter new id name price and author to update:\n");
		scanf("%d",&l[index].id);
		_flushall();
		gets(l[index].name);
		_flushall();
		scanf("%d",&l[index].price);
		_flushall();
		gets(l[index].author);
	}
	printf("\nDisplay all library data\n");
	printf("\nId	Name	Price	Author\n");
	for(i=0;i<size;i++)
	{
		printf("%d	%s	%d	%s\n",l[i].id,l[i].name,l[i].price,l[i].author);	
	}
}

void uname(struct library* l)
{
	char uname[10];
	int flag=0,index;
	printf("\nEnter the name to update:");
	scanf("%d",&uname);
	for(i=0;i<size;i++)
	{
		if(strcmp(l[i].name,uname)==0)
		flag=1;
		i=index;
		printf("Enter new id name price and author to update");
		scanf("%d",&l[index].id);
		_flushall();
		gets(l[index].name);
		_flushall();
		scanf("%d",&l[index].price);
		_flushall();
		gets(l[index].author);
	}
	printf("\nDisplay all library data\n");
	printf("\nId	Name	Price	Author\n");
	for(i=0;i<size;i++)
	{
		printf("%d	%s	%d	%s\n",l[i].id,l[i].name,l[i].price,l[i].author);	
	}
}

void uprice(struct library* l)
{
	int uprice,flag=0,index;
	printf("\nEnter the price to update:");
	scanf("%d",&uprice);
	for(i=0;i<size;i++)
	{
		if(l[i].id==uprice)
		flag=1;
		i=index;
		printf("Enter new id name price and author to update");
		scanf("%d",&l[index].id);
		_flushall();
		gets(l[index].name);
		_flushall();
		scanf("%d",&l[index].price);
		_flushall();
		gets(l[index].author);
	}
	printf("\nDisplay all library data\n");
	printf("\nId	Name	Price	Author\n");
	for(i=0;i<size;i++)
	{
		printf("%d	%s	%d	%s\n",l[i].id,l[i].name,l[i].price,l[i].author);	
	}
}

void uauthor(struct library* l)
{
	char uauthor[10];
	int flag=0,index;
	printf("\nEnter the author to update:");
	scanf("%d",&uauthor);
	for(i=0;i<size;i++)
	{
		if(strcmp(l[i].author,uauthor)==0)
		flag=1;
		i=index;
		printf("Enter new id name price and author to update");
		scanf("%d",&l[index].id);
		_flushall();
		gets(l[index].name);
		_flushall();
		scanf("%d",&l[index].price);
		_flushall();
		gets(l[index].author);
	}
	printf("\nDisplay all library data\n");
	printf("\nId	Name	Price	Author\n");
	for(i=0;i<size;i++)
	{
		printf("%d	%s	%d	%s\n",l[i].id,l[i].name,l[i].price,l[i].author);	
	}
}

void did(struct library* l)
{
	int count,did;
	printf("\nEnter id to find book:\n");
	scanf("%d",&did);
	
	for(i=0;i<size;i++)
	{
		if(l[i].id==did)
		{
			for(j=i;j<size;j++)
			{
				l[j]=l[j+1];
			}
			count++;
		}	
	}
	
	size=size-count;
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void dname(struct library* l)
{
	int count;
	char dname[10];
	printf("\nEnter name to find book:\n");
	scanf("%s",&dname);

	for(i=0;i<size;i++)
	{
		if(strcmp(l[i].name,dname)==0)
		{
			for(j=i;j<3;j++)
			{
				l[j]=l[j+1];
			}
			count++;
		}	
	}
	
	size=size-count;
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size-count;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void dprice(struct library* l)
{
	int count,dprice;
	printf("\nEnter price to find book:\n");
	scanf("%d",&dprice);
	
	for(i=0;i<size;i++)
	{
		if(l[i].price==dprice)
		{
			for(j=i;j<size;j++)
			{
				l[j]=l[j+1];
			}
			count++;
		}	
	}
	
	size=size-count;
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size-count;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void dauthor(struct library* l)
{
	int count;
	char dauthor[10];
	printf("\nEnter author to find book:\n");
	scanf("%s",&dauthor);

	for(i=0;i<size;i++)
	{
		if(strcmp(l[i].author,dauthor)==0)
		{
			for(j=i;j<3;j++)
			{
				l[j]=l[j+1];
			}
			count++;
		}	
	}
	
	size=size-count;
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size-count;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void iid(struct library* l)
{
	int iid,count=0,index;
	printf("\nEnter id to want to index:\n");
	scanf("%d",&iid);
	
	for(i=0;i<size;i++)
	{
		if(l[i].id==iid)
		{
			index=i;
			count++;
		}	
	}
	size=size+count;
	for(i=size;i>index;i--)
	{
		l[i]=l[i-1];	
	}
	printf("insert id name price and auther to index: %d\n",index);
	scanf("%d",&l[index].id);
	_flushall();
	gets(l[index].name);
	_flushall();
	scanf("%d",&l[index].price);
	_flushall();
	gets(l[index].author);
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void iname(struct library* l)
{
	int count,index;
	char iname[10];
	printf("\nEnter name to want to index:\n");
	scanf("%s",&iname);
	
	for(i=0;i<size;i++)
	{
		if(strcmp(l[i].name,iname)==0)
		{
			index=i;
			count++;
		}	
	}
	
	for(i=size;i>index;i--)
	{
		l[i]=l[i-1];	
	 }
	printf("insert id name price and auther to index %d\n",index);
	scanf("%d",&l[index].id);
	_flushall();
	gets(l[index].name);
	_flushall();
	scanf("%d",&l[index].price);
	_flushall();
	gets(l[index].author);

	size=size+count;
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void iprice(struct library* l)
{
	int iprice,count,index;
	printf("\nEnter price to want to index:\n");
	scanf("%d",&iprice);
	
	for(i=0;i<size;i++)
	{
		if(l[i].price==iprice)
		{
			index=i;
			count++;
		}	
	}
	
	for(i=size;i>index;i--)
	{
		l[i]=l[i-1];	
	}
	printf("insert id name price and auther to index %d\n",index);
	scanf("%d",&l[index].id);
	_flushall();
	gets(l[index].name);
	_flushall();
	scanf("%d",&l[index].price);
	_flushall();
	gets(l[index].author);
	
	size=size+count;
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void iauthor(struct library* l)
{
	int count,index;
	char iauthor[10];
	printf("\nEnter name to want to index:\n");
	scanf("%s",&iauthor);
	
	for(i=0;i<size;i++)
	{
		if(strcmp(l[i].author,iauthor)==0)
		{
			index=i;
			count++;
		}	
	}
	
	for(i=size;i>index;i--)
	{
		l[i]=l[i-1];	
	 }
	printf("insert id name price and auther to index %d\n",index);
	scanf("%d",&l[index].id);
	_flushall();
	gets(l[index].name);
	_flushall();
	scanf("%d",&l[index].price);
	_flushall();
	gets(l[index].author);

	size=size+count;
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void Sid(struct library* l)
{
	printf("\n\nArrange book in asending order to the id:");
	
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(l[i].id>l[j].id)
			{
				temp=l[i];
				l[i]=l[j];
				l[j]=temp;
			}
		}
	}
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void Sprice(struct library* l)
{
	printf("\n\nArrange book in asending order to the price:");
	
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(l[i].price>l[j].price)
			{
				temp=l[i];
				l[i]=l[j];
				l[j]=temp;
			}
		}
	}
	
	printf("\nnew library is\n");
	printf("id	name	price	author");
	for(i=0;i<size;i++)
	{
		printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);
	}
}

void heighest_price(struct library* l)
{
	int max,index;
	printf("\n\nArrange book in ascending order to the id:");
	max=l[0].price;
	
	for(i=0;i<size;i++)
	{
		if(max<l[i].price)
		{
			max=l[i].price;
			index=i;	
		}
	}
	
	printf("\nnew heighest price book is\n");
	printf("id	name	price	author");
	printf("\n%d	%s	%d	%s",l[index].id,l[index].name,l[index].price,l[index].author);			
}

void mn_to_mx_price(struct library* l)
{
	int mn,mx;
	printf("\n\nEnter minimum price and maximum price to find all books:");
	scanf("%d %d",&mn,&mx);
	printf("min=%d max=%d",mn,mx);
	
	for(i=0;i<size;i++)
	{
		if(mn<=l[i].price && mx>=l[i].price )
		{
			printf("\n%d	%s	%d	%s" ,l[i].id,l[i].name,l[i].price,l[i].author);	
		}	
	}
}

void exit(struct library* l)
{
	int exit;
	printf("\nFinal display all library data\n");
	printf("\nId	Name	Price	Author\n");
	for(i=0;i<size;i++)
	{
		printf("%d	%s	%d	%s\n",l[i].id,l[i].name,l[i].price,l[i].author);	
	}	
	printf("Enter any number key on keyboard to close all program (except 1");
}


