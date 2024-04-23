#include <stdio.h>

int main() {

    // Initialize variables with arithmetic operations
    int a = 5 + 8;  // Add 5 and 8: a = 13
    int b = 6 - 3;  // Subtract 3 from 6: b = 3
    int c = 6 * 5;  // Multiply 6 and 5: c = 30
    int d = 12 / 4; // Divide 12 by 4: d = 3
    int e = 13 % 2; // Get remainder of 13 divided by 2: e = 1 (odd number)

    // Print the values of all variables
    printf("a:%i,\nb:%i,\nc:%i,\nd:%i,\ne:%i,\n", a, b, c, d, e);


    // Unary operators
    int f = -c;     // Negate the value of c: f = -30 (or we can use + too in similar way)
    int g = --c;    // Decrement c before its value is used: g = 29, c = 29
    int h = c--;    // Use the value of c, then decrement it: h = 29, c = 28
    int i = ++b;    // Increment b before its value is used: i = 4, b = 4
    int j = b++;    // Use the value of b, then increment it: j = 4, b = 5
	int z = !j;		// Logical NOT: f = !4, which is false (0)
	
	//Print Unary operators	
	printf("f:%i,\ng:%i,\nh:%i,\ni:%i,\nj:%i,\nz:%i\n",f, g, h, i, j, z);
    
	return 0;
}

