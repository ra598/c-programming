#include<stdio.h>
void main()
{
	int i,num,sum=0;
	printf(" find the sum of the even number;");
	scanf("%d",&num);
for(i=0; i<=num; i=i+2)
	{
		sum=sum+i;
	}
	printf("sum of the even number is %d",sum);
	return 0;
}
