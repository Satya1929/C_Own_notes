#include <stdio.h>

int main()
{
    int a = 7 ;
    int* p = &a ;

    printf("a =  %d\n" , a);
    printf("p =  %d\n" , p);
    
    printf("&a =  %d\n" , &a);
    printf("&p =  %d\n" , &p);

    // printf(" *a = " , *a);
    printf("*p =  %d\n" , *p);

    return 0;
}
