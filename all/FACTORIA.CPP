#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,i;
printf("\nEnter number\n");
scanf("%d",&n);
i=1;
while(i<=n)
{
 if(n%i==0)
 {
   printf("%d\n",i);
 }
   i++;
}
getch();
}
