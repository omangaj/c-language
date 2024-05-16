#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j,cur,last,sum,fact,end;
printf("Enter the limit:");
scanf("%d",&end);
for(i=1;i<=end;i++)
{
cur=i;
sum=0;
while(cur>0)
{
fact=1;
last=cur%10;
for(j=1;j<=last;j++)
{
fact=fact*j;
}
sum=sum=fact;
cur=cur/10;
}
if(sum==i)
{
printf("%d",i);
}
}
getch();
}