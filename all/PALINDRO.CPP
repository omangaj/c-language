#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,m,rev=0,i;
printf("\nEnter number\n");
scanf("%d",&n);
m=n;
while(n!=0)
{
i=n%10;
rev=rev*10+i;
n=n/10;
}
printf("\nThis is a rev:%d",rev);

if(m==rev)
{
 printf("\nThis is palindrome");
}
else
{
 printf("This is not palindrome");
}
getch();
}
