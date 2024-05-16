#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,a[5],j,temp;
printf("Enter elements in array:\n");
for(i=0;i<5;i++)
 scanf("%d",&a[i]);
printf("array is :\n");
for(i=0;i<5;i++)
 printf("%d\t",a[i]);
printf("\nEven elements are:\n");
for(i=0;i<5;i++)
{
 if(a[i]%2==0)
  printf("%d\t",a[i]);
}
printf("\nOdd elements are:\n");
for(i=0;i<5;i++)
{
 if(a[i]%2==1)
  printf("%d\t",a[i]);
}
getch();
}