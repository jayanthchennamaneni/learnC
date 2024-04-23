#include <stdio.h>

int main() {
	
    // Initialize variables
	int a = 100;
	int b = 2;
	int c = 2;
	int d = 2;
	double e = 2; // using double for floating-point division
	int f = 2;
	

    // Compound assignment operators
    b += a;  // Equivalent to: b = b + a; Adds the value of 'a' to 'b'
    c -= a;  // Equivalent to: c = c - a; Subtracts the value of 'a' from 'c'
    d *= a;  // Equivalent to: d = d * a; Multiplies the value of 'd' by 'a'
    e /= a;  // Equivalent to: e = e / a; Divides the value of 'e' by 'a'
    f %= a;  // Equivalent to: f = f % a; Computes the remainder of 'f' divided by 'a'

    printf("a:%i,\nb:%i,\nc:%i,\nd:%d,\ne:%f,\nf:%i\n", a, b, c, d, e, f);

    return 0;
}
 
