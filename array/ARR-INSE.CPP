#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[10],size,i,val,index;
printf("Enter size of array:");
scanf("%d",&size);
printf("Enter five values in array:\n");
for(i=0;i<size;i++)
{
 scanf("%d",&a[i]);
}
printf("Values in array:\n");
for(i=0;i<size;i++)
{
 printf("%d\t",a[i]);
}
printf("\nEnter value to insert:");
scanf("%d",&val);
printf("Enter value to insert in index:");
scanf("%d",&index);
for(i=size;i>=index;i--)
 a[i]=a[i-1];
a[i]=val;
size++;
printf("\nValues in array after insrtion:\n");
for(i=0;i<size;i++)
{
 printf("%d\t",a[i]);
}

getch();
}