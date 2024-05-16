#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,temp,i,j,sum=0;
printf("Enter Number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 for(j=1;j<i;j++)
 {
  if(i%j==0)
  sum=sum+j;
 }
if(sum==i)
printf("%d\t",i);
}
getch();
}
