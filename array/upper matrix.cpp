#include <stdio.h>
int main()
{   
    int a[10][10],i,j,s1,s2;

    printf("Enter size of a[i]: ");
    scanf("%d", &s1);
 
    printf("Enter size of a[j]: ");
    scanf("%d", &s2);

    printf("Enter values in matrix: \n");
    for (i=0;i<s1;i++)
    {
        for (j=0;j<s2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nvalues in matrix: \n");
    for (i=0;i<s1;i++)
    {
        for (j=0;j<s2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
 
   	for (i=0;i<s1;i++)
    {
        for (j=0;j<s2;j++)
        {
            if (i<j)
            {
                a[i][j]=0;
            }
        }
    }
 
    printf("The upper Triangular matrix is: \n");
    for (i=0;i<s1;i++)
    {
        for (j=0;j<s2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
