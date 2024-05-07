// Write a C program to print all natural numbers from 1 to n using loop.

#include <stdio.h>

int main()
{
    int i = 1 , n ;

    printf("Enter the number of natural numbers ");
    scanf("%d" , &n );

    while ( i <= n)
    {
        if (i < n)
        {
            printf("%d, ",i ); 
        }

        if (i == n)
        {
            printf("%d.",i ); 
        }
                    
        i++ ;
    }

    return 0;
}