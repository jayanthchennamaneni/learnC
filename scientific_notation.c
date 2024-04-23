#include <stdio.h>

int main() {
	
	double x;

    printf("how many stars: ");
	scanf("%lf", &x);

    printf("%lf\n", x); // Prints 'x' as a floating-point number
    printf("%e\n", x); // Prints 'x' in scientific notation
    printf("%g\n", x); // Prints 'x' using the shortest representation: either %e or %f, whichever is shorter(≥e-4 or ≤e5)

    return 0;
}

