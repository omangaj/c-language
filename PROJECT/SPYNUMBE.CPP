#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,rem,sum=0,multi=1;
printf("Enter number\n");
scanf("%d",&n);
while(n!=0)
{
 rem=n%10;
 sum=sum+rem;
 multi=multi*rem;
 n=n/10;
}
if(sum==multi)
{
printf("This is a spy number");
}
else
{
printf("This is a not spy number");
}
getch();
}
