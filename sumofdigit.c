#include<stdio.h>
int main()
{
	int N,rem,sum=0;
	printf("enter the value of N:");
	scanf("%d",&N);
	while((N>0))
	{
	rem=N%10;
	sum=sum+rem;
	N=N/10;
	}
	printf("\n Required sum=%d",sum);
	return 0;
}
