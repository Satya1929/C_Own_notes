// Write a C program to print alphabets from A to Z using for loop


#include <stdio.h>

int main()
{
    char ch;

    printf("Alphabets from A - Z are: \n");
    for(ch='A'; ch<='Z'; ch++)
    {
        printf("%c = %d \n", ch, ch);
    }

    return 0;
}