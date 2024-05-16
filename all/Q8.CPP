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
 if(n%2==1)
 {
 printf("%d\t",n);
 sum=sum+n;
 }
 n++;
}
printf("\nSum of odd numbers:%d",sum);
getch();
}