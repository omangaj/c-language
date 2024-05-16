#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,i=1;
printf("Enter number:");
scanf("%d",&n);
while(i<=10)
{
 printf("%d * %d : %d\n",n,i,n*i);
 i++;
}
getch();
}