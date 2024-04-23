// Program: Workspace Tree Count
// Description: This program prompts the user to input the number of trees visible from their workspace.
//              It then provides feedback based on the input.

#include <stdio.h>


int main() {
	int tree_count;
	printf("how many trees can you see from your workspace: ");
	scanf("%i", &tree_count);

	if (tree_count >= 4) {
		printf("oh!! you have a great work place.\n");
	} else if (tree_count <4 && tree_count >= 1) {           // Checks if the number of trees is less than 4 and at least 1
		printf("you can do better!!\n");
	} else {
		printf("find an another job.\n");
	}
	
	return 0;
}
