#include <stdio.h>
#include<math.h>


int evalute(int arr[],int size){

	int i,num=0;
	
	for(i=0;i<size;i++)
	{
		num += arr[i] * pow(10,i);
		printf("%d\t",num);
	}
	
		
	
	return num;

}
int find_digits(int num)
{
	int temp,i=0,size,arr_digit[20];
	
	while(num != 0)
	{
		arr_digit[i]=num % 10;
		i++;
		num/=10;

	}

	size=i;
	
	for(i=0;i<size-1;i++)
	{
		if(arr_digit[i]>arr_digit[i+1])
		{
			temp=arr_digit[i];
			arr_digit[i]=arr_digit[i+1];
			arr_digit[i+1]=temp;
			
			return (evalute(arr_digit,size));
		}

	}

	return 0;
}

int main (){
	int num;
	printf("Enter a number :");
	fflush(stdout);
	scanf("%d",&num);
	int res=find_digits(num);

	if (res)
	{
		printf("the number is greather than %d made from its digit is %d",num,res);
	}
	else
	{
		printf("there is no number greather than");
	}








}