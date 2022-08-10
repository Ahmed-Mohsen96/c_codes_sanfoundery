#include<stdio.h>
int sum_digit(int num){
	static int sum=0;
	if(num!=0){
	int rem=num%10;
	 sum =sum +rem;
	 num /=10;
	sum_digit(num);
	}

	return sum;
}
int main()
{
	int num;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%d",&num);
	int temp=num;
	int sum=sum_digit(num);
	
	printf("sum of digit of %d is %d",temp,sum);


}
