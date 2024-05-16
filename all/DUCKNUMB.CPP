#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,flag=0,rem;
printf("Enter number\n");
scanf("%d",&n);
while(n!=0)
{
 rem=n%10;
 if(rem==0)
 {
  flag=1;
  break;
 }
 n=n/10;
}
if(flag==1)
{
printf("This is a duck number");
}
else
{
printf("This is not a duck number");
}
getch();
}

