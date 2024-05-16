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
	int i,j,choice,flag=0,index,count=0,sid,sprice,max,mn,mx;
	char C,sname[10],sauthor[10];
	
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
	printf("\nchoice\n1.count library\n2.display library\n3.update library\n4.delete library\n5.insert library\n6.sort\n7.highest price book\n8.min to max price books");
	printf("\nEnter choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
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
			break;
			case 2:
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
			break;
			case 3:
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
			break;
			case 4:
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
			break;
			default :
				printf("\nInvalid choice");
			break;
			}
		printf("\ndo you want to cantinue update say (yes=1/no=0)");
		scanf("%d",&c);
		}while(c==1);
		}
	break;
	case 2:
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
			break;
			case 2:
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
			break;
			case 3:
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
			break;
			case 4:
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
			break;
			default :
				printf("\nInvalid choice");
			break;
			}
		printf("\ndo you want to cantinue update say 2\n");
		scanf("%d",&D);
		}while(D==2);
		}
	break;
	case 3:
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
				break;
				case 2:
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
				break;
				case 3:
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
				break;
				case 4:
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
				break;
				default :
					printf("\nInvalid choice");
				break;
				}
			printf("\ndo you want to cantinue update say(yes=3/no=0)");
			scanf("%d",&u);
			}while(u==3);
		}
	break;
	case 4:
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
				break;
				case 2:
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
				break;
				case 3:
					{
						printf("\n\nEnter price to find:");
						scanf("%d",&sprice);
	
						for(i=0;i<5;i++)
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
						for(i=0;i<5;i++)
						{
							printf("\n%d	%s	%d	%s" ,lib[i].id,lib[i].name,lib[i].price,lib[i].author);
						}
					}
				break;
				case 4:
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
				break;
				default :
					printf("\nInvalid choice");
				break;
				}
			printf("\ndo you want to cantinue update say (yes=4/no=0):");
			scanf("%d",&d);
			}while(d==4);
		}
	break;
	case 5:
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
						
						printf("\nEnter id to want to index:\n");
						scanf("%d",&sid);
	
						for(i=0;i<3;i++)
						{
							if(lib[i].id==sid)
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
					}
				break;
				case 2:
					{
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
					}
				break;
				case 3:
					{
						printf("\nEnter price to want to index:\n");
						scanf("%d",&sprice);
	
						for(i=0;i<3;i++)
						{
							if(lib[i].price==sprice)
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
					}
				break;
				case 4:
					{
						printf("\nEnter author to want to index:\n");
						scanf("%s",&sauthor);
	
						for(i=0;i<3;i++)
						{
							if(strcmp(lib[i].author,sauthor)==0)
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
	break;
	case 6:
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
			break;
			case 2:
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
			break;
			default :
				printf("\nInvalid choice");
			break;
			}
			printf("\ndo you want to cantinue update say (yes=6/no=0)\n");
			scanf("%d",&s);
			}while(s==6);
		}
	break;
	case 7:
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
	break;
	case 8:
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
