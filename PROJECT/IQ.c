#include<stdio.h>
int main(){
    int ein=170,chef;
    printf("The IQ of chef is \n");
    scanf("%d",&chef);
    chef=chef+7;
    if (chef>ein)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}