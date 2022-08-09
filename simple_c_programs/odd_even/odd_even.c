#include <stdio.h>
 
void main()
{
    int num, remainder;
 
    printf("Enter an integer : ");
    scanf("%d", &num);
    remainder = num % 2;
    if (remainder == 0)
        printf("%d is an even integer\n", num);
    else
        printf("%d is an odd integer\n", num);
}