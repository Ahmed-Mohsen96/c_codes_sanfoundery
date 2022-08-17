// program to clculate sum of rows and colums in matrix

#include<stdio.h>



#define m 3
#define n 3


int main()
{

//defining matrix
char i,j;

int matrix[n][m]={0};
// 1 2 3
// 4 5 6

// scainig rows and colums
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		printf("Enter matrix[%d][%d]:\n",i,j);
		fflush(stdout);
		scanf("%d",&matrix[i][j]);
	}
}


printf("matrix \n");
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		
		printf("matrix[%d][%d]:%d\n",i,j,matrix[i][j]);
	}
}

//sum of rows
static int sum_rows=0,sum_colums=0;
for(i=0;i<n;i++)
{
	for(j=0;j<3;j++)
	{
		sum_rows += matrix[i][j];
	}
	
		
}
printf("sum_rows=%d\n",sum_rows);
			
	

// sum of colums
for(j=0;j<m;j++)
{
	for(i=0;i<n;i++)
	{
		sum_colums += matrix[i][j];
	}
	
		
}

printf("sum_colums=%d\n",sum_colums);


printf("sum_matrix=%d",sum_colums);

}