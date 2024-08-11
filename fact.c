#include<stdio.h>
void main()
{
int i,fact=1,num;
printf("Enter the any number to find factrial");
scanf("%d",&num);
for(i=1; i<=num; i+1)	
{
	fact=fact*i;
}
printf("factrial of the given number is:%d,fact");
return 0;
}
