#include<stdio.h>
struct emp
{
	int id,sal;
	char name[10];
};
int main()
{
	struct emp e[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("\nEnter id name amd salary of employee:\n");
		scanf("%d",&e[i].id);
		_flushall();
		gets(e[i].name);
		_flushall();
		scanf("%d",&e[i].sal);
	}

	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
	}
	return 0;
}
