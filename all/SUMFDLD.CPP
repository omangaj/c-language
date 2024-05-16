#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,fd,ld,sum=0;
printf("\nEnter number\n");
scanf("%d",&n);
ld=n%10;
while(n>=10)
{
n=n/10;
}
sum=n+ld;
printf("\nFirst digit:%d",n);
printf("\nlast digit:%d",ld);
printf("\nSum of fd & ld=%d",sum);
getch();
}
