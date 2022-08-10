#include<stdio.h>


int main()
{
	float num1,num2;
	printf("Enter two numbers");
	fflush(stdout);
	scanf("%f%f",&num1,&num2);
	if(num1==num2){
		printf("%f are equal %f",num1,num2);
	}
	else
		printf("%f are not equal %f",num1,num2);
}
