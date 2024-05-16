#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int day;
printf("\nEnter number 1 to 7\n");
scanf("%d",&day);
switch(day){
case 1:
printf("Sunday");
break;
case 2:
printf("Monday");
break;
case 3:
printf("Tuesday");
break;
case 4:
printf("Wednesday");
break;
case 5:
printf("Thirsday");
break;
case 6:
printf("Friday");
break;
case 7:
printf("Saturday");
break;
defaulf:
printf("Not currect day");
}
getch();
}