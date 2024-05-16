#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i=1,n,j=1,count=0;
printf("Enter number:");
scanf("%d",&n);
while(j<=n)
{
 for(i=1;i<=j;i++)
 {
  if(j%i==0)
  {
   count++;
  }
 }
 if(count==2||j==1)
 {
  printf("%d\n",j);
 }
 count=0;
 j++;
}
getch();
}