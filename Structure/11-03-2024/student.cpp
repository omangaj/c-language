#include<stdio.h>
struct student
{
	int id,std,per;
	char name[10],div[1];
};
int main()
{
	struct student s;
	printf("Enter student id,name,std,div and per:\n");
	scanf("%d",&s.id);
	_flushall();
	gets(s.name);
	_flushall();
	scanf("%d",&s.std);
	_flushall();
	gets(s.div);
	_flushall();
	scanf("%d",&s.per);
	
	printf("student info is:\n");
	printf("id=%d  name=%s  std=%d  div=%s  per=%d",s.id,s.name,s.std,s.div,s.per);
	
	return 0;
}

