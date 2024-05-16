#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[5],i,j,temp,n,ceiling;
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
  ceiling=a[0];
  break;
 }
  else if(a[4]<n)
 {
  ceiling=-1;
  break;
 }
 else if(a[i]==n)
 {
  ceiling=a[i];
  break;
 }
 else if(a[i]<n && a[i+1]>n)
 {
  ceiling=a[i+1];
  break;
 }
}
printf("Number:%d Ceiling:%d",n,ceiling);
getch();
}
