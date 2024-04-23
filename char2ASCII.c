#include <stdio.h>

int main() {
	
	// code for converting character to ASCII decimal value
	char mychar;
	
	printf("Please enter your character: ");
	scanf("%c", &mychar);
	
	printf("%i\n", mychar);
	
	
	// code for converting ASCII decimal value to character
	int myint;
	
	printf("Please enter a number in the range of 0-127: ");
	scanf("%d", &myint);

	printf("%c\n",myint);	
		
	return 0;
}

