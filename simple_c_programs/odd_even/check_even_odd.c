#include <stdio.h>
// program to check a given number is odd or even
int main()
{
	//take number from user
	int num;
	printf("Enter an integer number:");
	fflush(stdout);
	scanf("%d",&num);
	//to check it 
	int rem;
	// get reminder 
	rem=num%2;
	// if reminder equal zero is even
	if(rem==0)
	{
		printf("%d is even",num);
	}
	// if reminder equal one is odd
	else
	{
		printf("%d is odd",num);
	}
	
	
	
	return 0;
}

