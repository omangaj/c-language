#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,m;
printf("Enter limit:");
scanf("%d",&m);
n=1;
while(m>=n)
{
 if(n%2==0)
 {
 printf("%d\t",n);
 }
 n++;
}
getch();
}