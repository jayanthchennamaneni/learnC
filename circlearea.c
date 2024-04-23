#include <stdio.h> 
 
int main() 
{
	int radius;
	printf("Please enter a radius:");
	scanf("%i", &radius);
	double area = 3.14 * (radius*radius);
	printf("the area of circle with radius %i is: %f\n",radius, area); 
	return 0; 
}
