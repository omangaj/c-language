#include<stdio.h>
#include<string.h>
int main(){
    char a[30];
    printf("Enter the string\n");
    gets(a);
    char ch,t,i;
    printf("Enter the chartaer to delete\n");
    scanf("%c",&ch);
    int len=strlen(a),index;
    for (i=0;i<len;i++)
    {
       if (a[i]==ch)
       {
        index=i;
        break;
       }
       
    }
    if (index!=-1)
    {
        i=index;
        while (i<len)
        {
           a[i]=a[i+1];
           i++;
           
        }
        len--;
    }
    
    puts(a);
    return 0;
}
