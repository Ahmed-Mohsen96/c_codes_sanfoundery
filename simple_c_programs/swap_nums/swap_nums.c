#include<stdio.h>
void ordinary_swap(int num1,int num2){
	int temp=num1;
	num1=num2;
	num2=temp;
	printf("After swapping \n num1=%d num2=%d",num1,num2);
}
void read_nums(int *num1,int *num2){
	printf("Enter two numbers to swap:");
	fflush(stdout);
	scanf("%d%d",num1,num2);
}
void swap_pointer(int *ptr1,int *ptr2){
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
}
void swap_without_temp(int *num1,int *num2){
	*num1=*num1+*num2;
	*num2=*num1-*num2;
	*num1=*num1-*num2;

}
int main()
{
	int num1,num2;
	
	read_nums(&num1,&num2);
	ordinary_swap(num1,num2);
	swap_pointer(&num1,&num2);
	printf("\nAfter swapping \n num1=%d num2=%d",num1,num2);
	swap_without_temp(&num1,&num2);
	printf("\nAfter swapping \n num1=%d num2=%d",num1,num2);
}

