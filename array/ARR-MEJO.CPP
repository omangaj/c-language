#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a[10],i,s,count=1,mejority,j,flag=0,k;
printf("Enter size of array less 10:\n");
scanf("%d",&s);
printf("Enter %d values in array:\n",s);
for(i=0;i<s;i++)
{
 scanf("%d",&a[i]);
}
mejority=s/2;
printf("mejority greater than %d",mejority);
for(i=0;i<s;i++)
{
 k=a[i];
 for(j=i+1;j<s;j++)
 {
  if(a[i]==a[j])
   count++;
 }
 if(mejority<count)
 {
  flag=1;
  break;
 }
 count=1;
}
if(flag==1)
 printf("\n%d is a %d times this is a mejority in array",k,count);
else
 printf("\nThere are no mejority in this array");
getch();
}