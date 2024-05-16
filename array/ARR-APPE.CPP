#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,s,count=0,greater,j,temp=0,skey;
	printf("Enter size of array less 10:\n");
	scanf("%d",&s);
	printf("Enter %d values in array:\n",s);
	for(i=0;i<s;i++)
	{
 		scanf("%d",&a[i]);
	}
	printf("\nsorted array:\n");
	for(i=0;i<s;i++)
	{ 
  		for(j=i+1;j<s;j++)
  		{
  			if(a[i]>a[j])
  			{ 
  	 			temp=a[i];
	 			a[i]=a[j];
	 			a[j]=temp;
    		}
  		}
	}
	for(i=0;i<s;i++)
	{
 		printf("%d\t",a[i]);
	}

	greater=s/2;
	printf("\nappear more than %d",greater);

	printf("\nEnter value to search in given array:\n");
	scanf("%d",&skey);

	for(i=0;i<s;i++)
	{
  		if(skey==a[i])
   		count++;
	}
 
	if (greater<count)
 		printf("\n%d appears more than %d time in given array",skey,greater);
	else
 		printf("\nNo appears than %d",greater);
 
return 0;
}
