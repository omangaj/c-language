#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,i,j,count=0;
printf("Enter limit:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++)
 {
 if(i%j==0)
 {
  count++;
 }
 }
 if(count==2)
 {
 printf("%d\t",i);
 }
 count=0;
}
getch();
}