#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%d",&num);
	int temp=num;
	int sum=0;
	while(num){
	int rem=num%10;
	 sum =sum +rem;
	num /=10;
	}
	printf("sum of digit of %d is %d",temp,sum);


}
