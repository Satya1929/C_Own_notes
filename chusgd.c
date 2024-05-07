#include <stdio.h>

int getFactorial(int num)
{
    int f = 1;
    int i = 0 ;

    if (num == 0)
    {
        f =  1;
        return f ;
    }
    
    else 
    {
        for (i = 1; i <= num; i++)
            f = f * i;
        return f ;

    }

    return 0 ;
}


int main()
{
    int a;
    a = 3 ;
    printf(" ans is %d" , getFactorial(a) ) ;

    return 0;
}