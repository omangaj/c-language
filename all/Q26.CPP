#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,i,count=0;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
 {
  count++;
 }
}
if(count==2)
{
 printf("This is prime");
}
else
{
 printf("This is not prime");
}
getch();
}