#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
long int n,i,j,cube;
printf("Enter the range:");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
cube=0;
for(j=1;j<=i;j++)
{
cube=j*j*j;
}
printf("cube of %ld is %ld\n",i,cube);
}
getch();
}