#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
clrscr();
int n,c,temp,i,j,count=0,rem,flag=0,sum=0,fact=0,l,p;
printf("Enter number:");
scanf("%d",&n);
do{
printf("1-prime number\n2-perfect number\n3-duck number\n4-strong number\n5-armstrongnumber");
printf("\nEnter case:");
scanf("%d",&c);
switch(c)
{
case 1:
{
temp=n;
for(i=1;i<n;i++)
{
 if(n%i==0)
 {
 count++;
 }
}
if(count==2)
 printf("%d is a prime number",temp);
else
 printf("%d is a not prime number",temp);
}
break;
case 2:
{
temp=n;
for(i=1;i<n;i++)
{
 fact=0;
 if(i%j==0)
 {
  fact=fact+i;
 }
 sum=sum+fact;
}
if(sum==temp)
 printf("%d is a pwrfect number",temp);
else
 printf("%d is a perfect number",temp);
}
break;
case 3:
{
temp=n;
while(temp!=0)
{
 rem=temp%10;
 if(rem==0)
 {
 flag=1;
  break;
 }
 temp=temp/10;
}
if(flag==1)
 printf("%d is a duck number",temp);
else
 printf("%d is a duck number",temp);
}
break;
case 4:
{
temp=n;
 sum=0;
 while(n!=0)
 {
 rem=n%10;
 fact=1;
 for(i=1;i<=rem;i++)
 {
 fact=fact*i;
 }
 sum=sum+fact;
 n=n/10;
}
if(sum==temp)
 printf("%d is a strong number",temp);
else
 printf("%d is a not strong number",temp);
}
break;
case 5:
{
for(i=1;i<=n;i++)
{
 temp=n;
 while(temp!=0)
 {
  temp=temp/10;
  count++;
 }
 temp=n;
 while(temp>0)
 {
  rem=temp%10;
  p=pow(rem,count);
  sum=sum+rem;
  temp=temp/10;
}
}
  if(sum==n)
   printf("%d is a armstrong number",n);
  else
   printf("%d is a not armstrong number",n);
}
break;
}
printf("\nDo you want to continue to enter below 5 number:");
scanf("%d",&l);
}while(l<=5);
getch();
}


