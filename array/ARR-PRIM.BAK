#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[10],i,s,j,flag=0,count=0;
printf("Enter array size less 10:\n");
scanf("%d",&s);
printf("Enter values in array:\n");
for(i=0;i<s;i++){
 scanf("%d",&a[i]);
 }
printf("\narray is:\n");
for(i=0;i<s;i++){
 printf("%d\t",a[i]);
 }

printf("\nprime numbers are:\n");
for(i=0;i<s;i++)
{
 count=0;
 for(j=1;j<=a[i];j++)
 {
  if(a[i]%j==0)
  {
   count++;
  }
 }
  if(count==2)
  {
   printf("%d\t",a[i]);
  }
}
getch();
}