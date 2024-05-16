#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int s,i,a[10],n,count=0,j;
printf("Enter size of array:\n");
scanf("%d",&s);
printf("\nEnter values in array:\n");
for(i=0;i<s;i++)
 scanf("%d",&a[i]);
printf("Enter value to be deleted:");
scanf("%d",&n);
for(i=0;i<s;i++)
{
 if(a[i]==n)
 {
  count++;
  for(j=i;j<s;j++)
  {
   a[j]=a[j+1];
  }
  i--;
 }
}
for(i=0;i<(s-count);i++)
 printf("%d\t",a[i]);
getch();
}