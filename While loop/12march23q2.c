// Write a C program to print all natural numbers in reverse from n to 1 using for loop.

#include <stdio.h>

int main()
{
    int i , n ;

    printf("Enter the number of natural numbers ");
    scanf("%d" , &n );

    i = n ;

    while ( i >= 1)
    {
        if (i > 1)
        {
            printf("%d, ",i ); 
        }

        if (i == 1)
        {
            printf("%d.",i ); 
        }
                    
        i-- ;
    }

    return 0;
}