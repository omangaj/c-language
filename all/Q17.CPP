#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,rem,rev=0,temp;
printf("Enter number:");
scanf("%d",&n);
temp=n;
while(n!=0)
{
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
}
printf("reverse of number:%d",rev);
if(temp==rev)
{
 printf("\nThis is palindrome");
}
else
{
 printf("\nThis is not palindrome");
}
getch();
}