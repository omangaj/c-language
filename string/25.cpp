#include <stdio.h>
#include<string.h>
int main(){
    char a[20];
    printf("Enter the string\n");
    gets(a);
    int len =strlen(a);
    for (int i=0;i<len;i++)
    {
        for (int j=i+1;j<len;j++)
        {
        	if(a[i]==32)
        		continue;
        		
            if (a[i]==a[j])
            {
                for (int k=j;k<len;k++)
                {
                    a[k]=a[k+1];  
                }
               len--;
               j--;   
            }   
        } 
    }
    puts(a);
    return 0;
}
