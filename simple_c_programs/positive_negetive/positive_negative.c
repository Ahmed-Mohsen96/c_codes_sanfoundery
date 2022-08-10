#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number :");
	fflush(stdout);
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is positive\n",num);
	}
	else
	{
		printf("%d is negative\n",num);
	}
	return 0;
}