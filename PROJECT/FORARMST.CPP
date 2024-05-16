#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int range,i,temp,rem,sum=0;
printf("Enter range:");
scanf("%d",&range);
for(i=1;i<=range;i++)
{
 temp=i;
 while(i!=0)
 {
  rem=i%10;
  sum=sum+(rem*rem*rem);
  i=i/10;
  }
 if(sum==temp)
 {
  printf("%d\t",temp);
 }
 i=temp;
}
getch();
}
