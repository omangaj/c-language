#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,temp,rem,s=0;
printf("Enter3 digit number\n");
scanf("%d",&n);
temp=n;
while(n!=0)
{
 rem=n%10;
 s=s+rem*rem*rem;
 n=n/10;
}
if(s==temp)
{
printf("armstrong number");
}
else
{
printf("not armstong number");
}
getch();
}