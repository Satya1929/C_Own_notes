/*
#include <stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch); 
	printf("%c\n", ch);
	return 0;
}
*/

/*
// C program to show input and output
#include <stdio.h>
int main()
{
	// Declare the variables
	int num;
	char ch;
	float f;

	// --- Integer ---

	// Input the integer
	printf("Enter the integer: ");
	scanf("%d", &num);

	// Output the integer
	printf("\nEntered integer is: %d", num);

	// --- Float ---

	//For input Clearing buffer
	while((getchar()) != '\n');

	// Input the float
	printf("\n\nEnter the float: ");
	scanf("%f", &f);

	// Output the float
	printf("\nEntered float is: %f", f);

	// --- Character ---

	// Input the Character
	printf("\n\nEnter the Character: ");
	scanf("%c", &ch);

	// Output the Character
	printf("\nEntered character is: %c", ch);

	return 0;
}
*/


// C program to show input and output

#include <stdio.h>

int main()
{

	// Declare string variable
	// as character array
	char word[50];
    char sentence[50];

	// --- String ---
	// To read a word

	// Input the Word
	printf("Enter the Word: ");
	scanf("%s", word);

	// Output the Word
	printf("Entered Word is: %s", word);

	// --- String ---
	// To read a Sentence

	// Input the Sentence
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

	// Output the String
    printf("You entered: %s", sentence);

	return 0;
}
