#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n;
printf("Enter limit:");
scanf("%d",&n);
while(n>=1)
{
 printf("%d\t",n);
 n--;
}
getch();
}