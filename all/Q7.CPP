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
 if(n%2==0)
 {
 printf("%d\t",n);
 sum=sum+n;
 }
 n++;
}
printf("Sum of all even number:%d",sum);
getch();
}