#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
char c,vowel;
printf("\nEnter any alphabet\n");
scanf("%c",&c);
if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
 printf("\nThis is a vowel");
}
else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
 printf("This is a vowel");
}
else
{
 printf("This is a consonant");
}
getch();
}