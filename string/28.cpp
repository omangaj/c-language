#include <stdio.h>

int main(){
    char a[20];
    char ch,c;
    int ind;
    printf("Enter the string\n");
    gets(a);
    printf("Enter the character:");
    scanf("%c",&ch);
    printf("\nEnter the change character:");
    scanf("\n%c",&c);
    for (int i=0;a[i];i++)
    {
       if (a[i]==ch)
       {
        ind=i;
        a[ind]=c;
       }
       
    }
    puts(a);
    return 0;

}
