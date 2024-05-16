#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[5],i,j,temp,max,max2;
printf("Enter five values in array:\n");
for(i=0;i<5;i++)
{
 scanf("%d",&a[i]);
}
max=a[0];
max2=a[0];
for(i=0;i<5;i++)
{
 if(a[i]>max)
 {
  max2=max;
  max=a[i];
 }
 else if(a[i]>max2 && a[i]<max)
  max2=a[i];
}
   printf("second miximum value in array:%d",max2);

getch();
}