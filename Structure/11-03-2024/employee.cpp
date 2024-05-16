#include<stdio.h>
struct emp
{ 
	int id,sal;
	char name[10];
};

int main()
{
	struct emp e1;
	printf("Enter id, name and salary of employee:\n");
	scanf("%d",&e1.id);
	_flushall();
	gets(e1.name);
	_flushall();
	scanf("%d",&e1.sal);
	
	printf("id=%d  name=%s  salary=%d",e1.id,e1.name,e1.sal);
	return 0;
}

