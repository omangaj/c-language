#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n1,n2,i,hcf;
printf("Enter number:\n");
scanf("%d\t%d",&n1,&n2);
for(i=1;i<=n1 && i<=n2;i++)
{
if(n1%i==0 && n2%i==0)
 {
  hcf=i;
 }
}
 printf("%d",hcf);
getch();
}