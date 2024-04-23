#include <stdio.h>
#include <stdbool.h>

int main() {
	
    // Define a boolean variable indicating whether it will rain
	bool will_it_rain = true;
	
    // Print a message indicating if it will rain, using a ternary operator
	printf("depends on the weather, will it rain today?: %s\n", will_it_rain ? "true" : "false");

	return 0;
}

