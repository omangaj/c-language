#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[10],b[10],c[20],i,j,s,s1,s2,temp;
printf("Enter size of first array:\n");
scanf("%d",&s1);
printf("Enter five values in array:\n");
for(i=0;i<s1;i++)
 scanf("%d",&a[i]);
printf("Enter size of second array:\n");
scanf("%d",&s2);
printf("Enter value in array:\n");
for(i=0;i<s2;i++)
 scanf("%d",&b[i]);
s=s1+s2;
for(i=0;i<s1;i++)
  c[i]=a[i];
for(i=0,j=s1;j<s && i<s2;i++,j++)
  c[j]=b[i];

printf("merge array are:\n");
for(i=0;i<s;i++)
 printf("%d\t",c[i]);
printf("\narray in decending order:\n");
for(i=0;i<s;i++)
{
 for(j=i;j<s;j++)
 {
  if(c[i]<c[j])
  {
   temp=c[j];
   c[j]=c[i];
   c[i]=temp;
  }
 }
}
for(i=0;i<s;i++)
 printf("%d\t",c[i]);
getch();
}