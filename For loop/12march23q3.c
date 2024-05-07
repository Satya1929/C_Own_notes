// Write a C program to print alphabets from a to z using for loop


#include <stdio.h>

int main()
{
    char ch;

    printf("Alphabets from a - z are: \n");
    for(ch='a'; ch<='z'; ch++)
    {
        printf("%c ", ch);
    }

    return 0;
}