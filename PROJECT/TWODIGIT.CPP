#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,f,i,last,mid,temp,count,rem;
int p=1;
printf("Enter number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rem=temp%10;
count++;
temp=temp/10;
}
printf("%d",count);
for(i=1;i<count-1;i++)
{
p=p*10;
}
printf("%d\n",p);
f=(n%100)*p;
last=n/p;
mid=(n%p)/100;
mid=mid*100;
printf("%d %d %d\n",f,last,mid);
printf("The reverse of two first & last digit is %d",f+mid+last);
getch();
}