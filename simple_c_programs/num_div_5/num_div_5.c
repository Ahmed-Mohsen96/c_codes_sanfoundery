#include<stdio.h>

int main(){
	int num1,num2 ,i=0;
	int arr[10];
	printf("Enter a number :");
	fflush(stdout);
	scanf("%d%d",&num1,&num2);
	for(num1;num1<=num2;num1++){
		if(num1%5==0){
			arr[i]=num1;
			i++;
		}

		
	}
	int size=i;

	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
	





}

