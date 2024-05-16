#include <stdio.h>
#include<string.h>
int main(){
    char a[30];
    printf("Enter the string\n");
    gets(a);
    char ch,t;
    printf("Enter the chartaer to delete\n");
    scanf("%c",&ch);
    int len=strlen(a);
    for (int i=0;i<len;i++)
    {
        if (ch==a[i])
        {
            for (int j=i;j<len;j++)
            {
                a[j]=a[j+1];
            }
            len--;
           i--; 
        }
        
    }

    puts(a);
    return 0;
}
