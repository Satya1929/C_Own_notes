// Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>

int main()
{
    int i , sum = 0 , n;

    printf("Enter the number of natural numbers - ");
    scanf("%d" , &n );


    for ( i = 0; i <= n ; i++)
    {
        sum += i ;
    }
    
    printf("%d",sum );

    return 0;
}


    // printf("Enter the number of natural numbers ");
    // scanf("%d" , &a );

    // printf("\n%d",a );