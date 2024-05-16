#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[10],b[10],c[10],i,s,s1,j,k;
printf("Enter size of array less 10:\n");
scanf("%d",&s);
printf("Enter value in array:\n");
for(i=0;i<s;i++)
 scanf("%d",&a[i]);
printf("Given array is:\n");
for(i=0;i<s;i++)
 printf("%d\t",a[i]);

printf("\nEnter size ofarray lessthan given array size:\n");
scanf("%d",&s1);
for(i=0;i<s1;i++)
 b[i]=a[i];
printf("cut array is:\n");
for(i=0;i<s1;i++)
 printf("%d\t",b[i]);
printf("\nremaining array is:\n");
for(i=s1;i<s;i++)
 printf("%d\t",a[i]);

k=s-s1;
for(i=0,j=s1;i<s1 && j<s;i++,j++)
 c[j]=b[i];

for(i=s1,j=0;i<s && j<k;i++,j++)
 c[j]=a[i];

printf("\nNew array is:\n");
for(i=0;i<s;i++)
 printf("%d\t",c[i]);

getch();
}