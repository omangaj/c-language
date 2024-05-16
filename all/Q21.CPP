#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,base,p;
long int power=1;
printf("Enter base:");
scanf("%d",&base);
printf("Enter p:");
scanf("%d",&p);
for(i=1;i<=p;i++)
{
 power=power*base;
 i++;
}
printf("%d^%d=%ld",base,p,power);
getch();
}