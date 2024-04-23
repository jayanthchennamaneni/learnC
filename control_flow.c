// Program: AI Takeover Prediction
// Description: This program prompts the user to input their prediction about whether AI will take over.
//              It accepts 1/none-zero value for yes and 0 for no. It then prints a corresponding message based on the input.

#include <stdio.h>
#include <stdbool.h>

int main() {
	
	bool will_ai_takeover;
	int answer;

	printf("Will AI take over? (Enter 1/non-zero value for yes, 0 for no): ");	
	scanf("%d", &answer);
	
	will_ai_takeover = answer;

	if (will_ai_takeover) {	
		printf("Maybe when higher computing power is available.\n");	
	} else {
		printf("i don't think so.\n");
	}

	return 0;
}
