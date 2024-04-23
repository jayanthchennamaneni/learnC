/* 
Description:
This program generates a Fibonacci sequence pattern based on the number of rows specified by the user.
Each row represents a Fibonacci sequence, with each number being the sum of the two preceding numbers.
The user inputs the number of rows, and the program prints the Fibonacci sequence up to that row.
*/

#include <stdio.h>

int main() {
	
	int n, i, j, first = 0, second = 1, next;
	
	printf("How many rows: ");
	scanf("%d", &n);	
	
	for (i = 0; i < n; i++) {
		for(j=0; j <= i; j++) {
			printf("%d ", first);
			next = first + second;
			first = second;
			second = next;
		}
		printf("\n");	
	}
	return 0;
}
