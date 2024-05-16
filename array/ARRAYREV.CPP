#include<stdio.h>
#include<conio.h>
int main(){
int a[5],i,rev;
printf("Enter five values in array:\n");
for(i=0;i<5;i++)
{
 printf("a[%d]=",i);
 scanf("%d",&a[i]);
}
for(i=0;i<5/2;i++)
{
 rev=a[i];
 a[i]=a[4-i];
 a[4-i]=rev;
}
printf("reverse array is\n");
for(i=0;i<5;i++)
{
 printf("a[%d]=%d\n",i,a[i]);
}
return 0;
}
