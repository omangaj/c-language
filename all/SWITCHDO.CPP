#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
clrscr();
int n,c,temp,i,j,count=0,rem,flag=0,sum=0,fact=0,l,p,cur,last;
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
for(i=1;i<=n;i++)
{
 for(j=1;j<i;j++)
 {
 if(i%j==0)
 {
 count++;
 break;
 }
}
if(count==0)
 printf("%d\t",i);
 count=0;
 }
}
break;
case 2:
{
temp=n;
for(i=1;i<=n;i++)
{
 fact=0;
 for(j=1;j<i;j++)
 {
 if(i%j==0)
 {
  fact=fact+i;
 }
}
if(fact==i)
 printf("%d\t",i);
 }
}
break;
case 3:
{
for(i=1;i<=n;i++)
{
flag=0;
 temp=i;
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
 printf("%d\t",i);
}
}
break;
case 4:
{
for(i=1;i<=n;i++)
{
 cur=i;
 sum=0;
 while(cur>0)
 {
 fact=1;
 last=cur%10;
 for(j=1;j<=last;j++)
 {
  fact=fact*j;
 }
 sum=sum+fact;
 cur=cur/10;
}
if(sum==i)
printf("%d\t",i);

}
}
break;
case 5:
{
for(i=1;i<=n;i++)
{
 temp=i;
 while(temp!=0)
 {
  rem=temp%10;
  count++;
  temp=temp/10;
 }
 temp=i;
 while(temp>0)
 {
  rem=temp%10;
  p=pow(rem,count);
  sum=sum+rem;
  temp=temp/10;
  }
  if(sum==i)
  {
   printf("%d\t",i);
  }
  sum=0;
  }
}
break;
}
printf("\nDo you want to continue to enter below 5 number:");
scanf("%d",&l);
}while(l<=5);
getch();
}


