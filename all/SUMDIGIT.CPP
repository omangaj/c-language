#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,pro=1,i;
printf("\nEnter number\n");
scanf("%d",&n);
while(n>0)
{
i=n%10;
pro=pro*i;
n=n/10;
}
printf("\nProduct of number digit:%d",pro);
getch();
}
