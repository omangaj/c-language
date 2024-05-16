#include<stdio.h>
struct student
{
	int id,std,per;
	char name[10],div[1];
};
int main()
{
	struct student s1,s2;
	
	printf("Enter s1 id,name,std,div and per:\n");
	scanf("%d",&s1.id);
	_flushall();
	gets(s1.name);
	_flushall();
	scanf("%d",&s1.std);
	_flushall();
	gets(s1.div);
	_flushall();
	scanf("%d",&s1.per);
	
	printf("Enter s2 id,name,std,div and per:\n");
	scanf("%d",&s2.id);
	_flushall();
	gets(s2.name);
	_flushall();
	scanf("%d",&s2.std);
	_flushall();
	gets(s2.div);
	_flushall();
	scanf("%d",&s2.per);
	
	
	
	printf("Students info is:\n");
	printf("id=%d  name=%s  std=%d  div=%s  per=%d\n",s1.id,s1.name,s1.std,s1.div,s1.per);
	printf("id=%d  name=%s  std=%d  div=%s  per=%d",s2.id,s2.name,s2.std,s2.div,s2.per);
	
	printf("\n\nheighest percentage student is:\n");
	if(s1.per>s2.per)
		printf("id=%d  name=%s  std=%d  div=%s  per=%d\n",s1.id,s1.name,s1.std,s1.div,s1.per);
	else if(s2.per>s1.per)
		printf("id=%d  name=%s  std=%d  div=%s  per=%d",s2.id,s2.name,s2.std,s2.div,s2.per);
	else 
		printf("Both students are having same percentage");
	
	return 0;
}


