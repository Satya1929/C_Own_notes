// Logic to count number of digits in an integer

#include <stdio.h>

int main()
{
    int x , digit = 0 ;

    printf("Enter the number - ");
    scanf("%d" , &x );

    while (x > 0)
    {
        digit += 1 ; 
        x /= 10 ; 
    }

    printf("\nTotal number of digit is = %d",digit );

    return 0;
}


    // printf("Enter the number of natural numbers ");
    // scanf("%d" , &a );

    // printf("\n%d",a );