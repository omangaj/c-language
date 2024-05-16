#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[5],i,j,temp;
printf("Enter five values in array:\n");
for(i=0;i<5;i++)
{
 scanf("%d",&a[i]);
}
printf("Before sort in array:\n");
for(i=0;i<5;i++)
{
 printf("%d\t",a[i]);
}
for(i=0;i<5;i++)
{
 for(j=i+1;j<5;j++)
 {
  if(a[i]>a[j])
  {
   temp=a[j];
   a[j]=a[i];
   a[i]=temp;
  }
 }
}
printf("\nAfter sort array:\n");
for(i=0;i<5;i++)
 printf("%d\t",a[i]);
getch();
}