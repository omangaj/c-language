#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,fd,ld;
printf("\nEnter number\n");
scanf("%d",&n);
ld=n%10;
while(n>=10)
{
n=n/10;
}
printf("\nFirst digit:%d",n);
printf("\nlast digit:%d",ld);
getch();
}
