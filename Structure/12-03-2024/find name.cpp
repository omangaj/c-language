#include<stdio.h>
#include<string.h>
struct emp
{
	int id,sal;
	char name[10];
};
int main()
{
	struct emp e[3];
	int i,flag=0;
	char sname[10];
	for(i=0;i<3;i++)
	{
		printf("\nEnter id name amd salary of employee:\n");
		scanf("%d",&e[i].id);
		_flushall();
		gets(e[i].name);
		_flushall();
		scanf("%d",&e[i].sal);
	}
	printf("\nEnter name to find:");
	scanf("%s",&sname);

	printf("\nRecord is");
	for(i=0;i<3;i++)
	{
		if(strcmp(e[i].name,sname)==0)
		{
			flag=1;
			printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
		}
	}
	if(flag==0)
	printf("\nThis name is not found");
	return 0;
}
