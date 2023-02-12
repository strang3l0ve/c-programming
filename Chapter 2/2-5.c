// Calculates the value of the polynomial 3x⁵+2x⁴-5x³-x²+7x-6 for a value of
// x provided by the user

#include <stdio.h>

int main(void)
{
	float x, function;

	printf("Enter the value of x: ");
	scanf("%f", &x);

	function = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

	printf("Value of the polynomial: %.2f\n", function);

	return 0;
}
