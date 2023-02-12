#include <stdio.h>

int main(void)
{
	float amount, tax;

	printf("Enter the dollar-and-cents amount: ");
	scanf("%f", &amount);

	tax = (amount * 0.05f) + amount;

	printf("With tax added: %.2f\n", tax);

	return 0;
}
