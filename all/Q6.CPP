#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,m,sum=0;
printf("Enter limit:");
scanf("%d",&m);
n=1;
while(m>=n)
{
 printf("%d\t",n);
 sum=sum+n;
 n++;
}
printf("Sum of all natural number:%d",sum);
getch
();
}