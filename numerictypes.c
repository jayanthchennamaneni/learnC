#include <stdio.h>

/*************
Integer Types:
  	char: Typically 1 byte in size, used to store character data or small integer values.
  	short: Usually 2 bytes in size, provides a wider range than char.
  	int: Typically 4 bytes in size on most modern systems, used for integer values.
  	long: At least 4 bytes in size, often 8 bytes on 64-bit systems, providing a larger range than int.
  	long long: At least 8 bytes in size, introduced in C99, provides even larger range than long.
Floating-Point Types:
  	float: Typically 4 bytes in size, used to represent single-precision floating-point numbers.
  	double: Usually 8 bytes in size, provides higher precision than float, used for double-precision floating-point numbers.
	long double: Varies in size depending on the platform, provides extended precision compared to double.
Other Numeric Types:
	_Bool: A boolean type introduced in C99, capable of representing true or false values.
	_Complex: Introduced in C99, used for representing complex numbers.
	_Imaginary: Also introduced in C99, used for representing imaginary numbers.
****************/

int main() {
    char myChar = 'A';
    short myShort = 12345;
    int myInt = 1234567890;
    long myLong = 123456789012345;
    long long myLongLong = 1234567890123456789LL;
    
    float myFloat = 3.14f;
    double myDouble = 3.141592653589793;
    long double myLongDouble = 3.14159265358979323846L;

    _Bool myBool = 1;
	
    printf("char: %c\n", myChar);
    printf("short: %d\n", myShort);
    printf("int: %d\n", myInt);
    printf("long: %ld\n", myLong);
    printf("long long: %lld\n", myLongLong);
    
    printf("float: %f\n", myFloat);
    printf("double: %lf\n", myDouble);
    printf("long double: %Lf\n", myLongDouble);
    
    printf("_Bool: %d\n", myBool);

    return 0;
}
	
