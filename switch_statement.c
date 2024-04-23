/*
This program asks the user how much water they need in liters and suggests a suitable cup size based on the input.

The switch statement is used here to handle different cases based on the amount of water needed.
It evaluates the value of water_litres and executes the corresponding case statement. 
If the value matches one of the cases, it prints a message suggesting the appropriate cup size. 
If the value doesn't match any of the cases, the default case is executed, suggesting a bigger cup size.
*/

#include <stdio.h>


int main() {

	int water_litres;
	printf("how much water do you need (in litres): ");
	scanf("%d", &water_litres);
	
	switch(water_litres) {
		
		case 0:
			printf("You don't need a cup\n");
			break;
		case 1:
			printf("Ok then!! you need a 1 liter volume cup\n");
			break;
		case 2:
 	        printf("Ok then!! you need a 2 liter volume cup\n");
 			break;
		case 3:
 		    printf("Ok then!! you need a 3 liter volume cup\n");
			break;
		default:
			printf("Ok you need a bigger cup, that's too much water\n");
            break;
	}

	return 0;
}

