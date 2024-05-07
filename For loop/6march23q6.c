// 4. Write a program in C to read 10 numbers from the keyboard and find their sum and average. Go to the editor
// Test Data :
// Input the 10 numbers :
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000

#include <stdio.h>

int main()
{
    int i , num ;
    float sum ;

    for (i=1 ; i<=10 ; i++)
    {
        printf("Enter the %dth number - " , i);
        scanf("%d",& num) ;
        sum += num ;
    }

    printf("sum is %d" , (int)sum);
    printf("\navg is %f" , sum/10);

    return 0;
}