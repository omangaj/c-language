#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,rem,count=0,sum=0;
printf("Enter number:");
scanf("%d",&n);
while(n!=0)
{
 rem=n%10;
 if(n!=0)
 {
  sum=sum+rem;
  count++;
 }
 n=n/10;
}
printf("sum of digit:%d",sum);
getch();
}