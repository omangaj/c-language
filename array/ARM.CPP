#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int no,i,temp,count,rem,p,sum;
	printf("Enter Number:");
	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{
 		temp=i;
 		count=0;
 		while(temp!=0)
 		{
  			temp=temp/10;
  			count++;
 		}
 		temp=i;
 		sum=0;
 	while(temp>0)
 	{
  		rem=temp%10;
  		p=pow(rem,count);
  		sum=sum+p;
  		temp=temp/10;
 	}
 	if(sum==i)
 	{
  		printf("%d\t",i);
 	}
 	}
return 0;
}
