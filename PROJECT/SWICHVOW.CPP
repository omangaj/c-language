#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
char c;
printf("\nEnter alphabet\n");
scanf("%c",&c);
switch(c){
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
printf("This is a vowel");
break;
default:
printf("This is a consonant");
break;
}
getch();
}
