#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[5],i,j,temp,n,floor,ceiling;
printf("Enter values in array:\n");
for(i=0;i<5;i++)
  scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
 for(j=i+1;j<5;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
}
printf("Sorted array:\n");
for(i=0;i<5;i++)
 printf("%d\t",a[i]);
printf("\nEnter number:");
scanf("%d",&n);
for(i=0;i<5;i++)
{
 if(a[0]>n)
 {
  floor=-1;
  ceiling=a[0];
  break;
 }
  if(a[4]<n)
 {
  floor=a[0];
  ceiling=-1;
  break;
 }
  if(a[i]==n)
 {
  floor=a[i];
  ceiling=a[i];
  break;
 }
 else if(a[i]<n && a[i+1]>n)
 {
  floor=a[i];
  ceiling=a[i+1];
  break;
 }
}
printf("Number:%d  Floor:%d  Ceiling:%d",n,floor,ceiling);
getch();
}