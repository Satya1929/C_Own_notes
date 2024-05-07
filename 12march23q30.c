#include <stdio.h>

int main()
{
    char x ;
    int y ;

    printf("Enter the character : ");
    scanf("%c" , &x );

    y = (int)x ;

    // printf("%c\n",x );
    // printf("%d",x );







    return 0;
}


    // printf("Enter the number of natural numbers ");
    // scanf("%d" , &a );

    // printf("\n%d",a );



#include <stdio.h>

int main() 
{
    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);
    
    switch(mark/10) 
    {
        case 10:
        case 9:
            printf("Grade: S\n");
            break;
        case 8:
            printf("Grade: A\n");
            break;
        case 7:
            printf("Grade: B\n");
            break;
        case 6:
            printf("Grade: C\n");
            break;
        case 5:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: N\n");
            break;
    }
    return 0;
}