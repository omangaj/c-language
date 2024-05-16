#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int physics,chemistry,biology,maths,computer,total,per;
printf("\nEnter marks\n");
scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&maths,&computer);
printf("\nphysics=%d\nchemistry=%d\nbiology=%d\nmaths=%d\ncomputer=%d",physics,chemistry,biology,maths,computer);
total=physics+chemistry+biology+maths+computer;
per=total/5;
printf("\nPercentage=%d",per);
if (per>=90)
{
 printf("\nGrade A");
}
else if (per<90 && per>=80)
{
 printf("\nGrade B");
}
else if (per<80 && per>=70)
{
 printf("\nGrade C");
}
else if (per<70 && per>=60)
{
 printf("\nGrade D");
}
else if (per<60 && per>=40)
{
 printf("\nGrade E");
}
else
{
 printf("\nGrade F");
}
getch();
}
