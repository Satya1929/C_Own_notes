// C program to count frequency of digits in an integer

#include <stdio.h>

int main()
{
    int num , lastdigit, frq0 = 0,frq1 = 0,frq2 = 0,frq3 = 0,frq4 = 0,frq5 = 0,frq6 = 0,frq7 = 0,frq8 = 0,frq9 = 0;

    printf("Enter the number = ");
    scanf("%d" , &num );

    while (num != 0 )
    {
        lastdigit = num % 10 ;

        switch (lastdigit)
        {
        case 0:
            frq0 += 1 ;
            break;

        case 1:
            frq1 += 1 ;
            break;

        case 2:
            frq2 += 1 ;
            break;

        case 3:
            frq3 += 1 ;
            break;

        case 4:
            frq4 += 1 ;
            break;

        case 5:
            frq5 += 1 ;
            break;

        case 6:
            frq6 += 1 ;
            break;

        case 7:
            frq7 += 1 ;
            break;

        case 8:
            frq8 += 1 ;
            break;

        case 9:
            frq9 += 1 ;
            break;

        default:
            break;
        }

        num /= 10 ;
    }

    printf(" the frequency of number 0 is = %d\n",frq0 );
    printf(" the frequency of number 1 is = %d\n",frq1 );
    printf(" the frequency of number 2 is = %d\n",frq2 );
    printf(" the frequency of number 3 is = %d\n",frq3 );
    printf(" the frequency of number 4 is = %d\n",frq4 );
    printf(" the frequency of number 5 is = %d\n",frq5 );
    printf(" the frequency of number 6 is = %d\n",frq6 );
    printf(" the frequency of number 7 is = %d\n",frq7 );
    printf(" the frequency of number 8 is = %d\n",frq8 );
    printf(" the frequency of number 9 is = %d\n",frq9 );

    return 0;
}


    // printf("Enter the number of natural numbers ");
    // scanf("%d" , &a );

    // printf("\n%d",a );