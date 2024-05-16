#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n,i;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 if(n%i==0)
 {
  printf("%d\t",i);
 }
}
getch();
}