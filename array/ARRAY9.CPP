#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[5],i,j,sum;
printf("Enter five values in array:\n");
for(i=0;i<5;i++)
{
 scanf("%d",&a[i]);
}
printf("array is:");
for(i=0;i<5;i++)
{
 printf("%d\t",a[i]);
}
printf("\nEnter sum of pairs:");
scanf("%d",&sum);
for(i=0;i<5;i++)
{
 for(j=i+1;j<5;j++)
 {
  if(a[i]+a[j]==sum)
  printf("%d,%d\n",a[i],a[j]);
 }
}
getch();
}