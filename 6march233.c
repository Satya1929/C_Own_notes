#include <stdio.h>

int main()
{

	// Declare stentence variable
	// as character array
    char sentence[50];

	// --- String ---
	// To read a Sentence

	// Input the Sentence
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

	// Output the String
    printf("You entered: %s", sentence);

	return 0;
}


enum flag {constant1,constant2,constant3} variable ;

enum flag {constant1,constant2,constant3} ;
enum flag variable ;


