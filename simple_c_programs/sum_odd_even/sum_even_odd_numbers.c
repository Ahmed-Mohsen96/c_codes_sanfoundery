#include<stdio.h>

// program to find sum of odds and evens from 1 to N 
int main()
{
	// take N from user 
	int N,sum_even=0,sum_odd=0;
	printf("Enter N number :",&N);
	fflush(stdout);
	scanf("%d",&N);
	// looping from 1 to N 
	int i;
	for(i=1;i<=N;i++)
	{
		// check odd or even 
	    // store sum evens and odds
		if(i%2==0)
		{
			sum_even+=i;
		}
		else{
			sum_odd+=i;
		}
	}
	printf("sum of even =%d\n",sum_even);
	printf("sum_odd =%d\n",sum_odd);
	
	 
	
	
	
	
	
	
	return 0;
}
