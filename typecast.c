#include <stdio.h>

/*****
Type casting in C is similar to repackaging,eg.: converting all your papers into a book/transforming pennies into dollars
There are implicit(automatic) and explicit(manual) type castings
******/

int main() {

	printf("how many sodas did you drink today:");
	int sodas;
	scanf("%i",&sodas);
    
    // Explicit type Casting 'sodas' to double to perform floating-point division
	double packs = (double) sodas/6;

    // Display the total packs drank today with 3 decimal places
	printf("the total packs you drank today: %.3f\n", packs);
	
	return 0;
}
