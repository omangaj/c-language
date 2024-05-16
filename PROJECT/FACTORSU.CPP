#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,i,fac=0;
printf("\nEnter number\n");
scanf("%d",&n);
i=1;
while(i<n)
{
 if(n%i==0)
 {
   printf("%d\n",i);
   fac=fac+i;
 }
   i++;
}
if(fac==n)
{
printf("This is a perfect number");
}
else
{
printf("This is not a perfect number");
}
getch();
}
