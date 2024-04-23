#include <stdio.h>

int main() {
	
	/****** 
	In C, when you declare a variable without initializing it, the value it holds is indeterminate. 
	Therefore, printing the value of x in this case will result in printing whatever value happens to be 
	stored in the memory location allocated for x at that moment. This value is often referred to as garbage value.

	To avoid this, we should initialize x before using it.
	******/
	
	int x;

	printf("%i\n", x);
	
	return 0;
}

