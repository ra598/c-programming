#include<stdio.h>
int main()
{
	int N,count,Sum=0;
	printf("Enter the value of N");
	scanf("%d",&N);
	for(count=1; count<=N; count++)
	{
		Sum=Sum+count;
	}
	printf("\n Required sum=%d",Sum);
	return 0;	
}
