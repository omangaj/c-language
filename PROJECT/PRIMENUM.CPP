#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,i=1,count=0;
printf("\nEnter number\n");
scanf("%d",&n);
while(n>=i)
{
 if(n%i==0)
 {
  count++;
 }
 i++;
}
if(count==2)
{
 printf("This is a prime number");
}
else
{
 printf("This is not a prime number");
}
getch();
}
