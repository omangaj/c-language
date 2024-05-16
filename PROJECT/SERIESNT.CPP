#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,i,j,sum,s1;
printf("Enter the range:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=0;
for(j=1;j<=i;j++)
{
sum=sum+j;
}
s1=s1+sum;
}
printf("%d",s1);
getch();
}