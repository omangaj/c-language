#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,i,f=0,j=1,count=0;
printf("Enter number to find its prime factor:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 n%i==0;
 f=i;
 while(f>=j)
 {
  if(f%j==0)
  {
    count++;
  }
  j++;
 }
 if(count==2)
 {
  printf("%d\t",f);
 }
}
getch();
}



