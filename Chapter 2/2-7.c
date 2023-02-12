#include <stdio.h>

int main(void)
{
	int total, twenty, ten, five, one;

	printf("Enter a dollar amount: ");
	scanf("%d", &total);

	twenty = (total / 20);
	total = total - (twenty * 20);

	ten = (total / 10);
	total = total - (ten * 10);

	five = (total / 5);
	total = total - (five * 5);

	one = total;

	printf("$20 bills: %d\n", twenty);
	printf("$10 bills: %d\n", ten);
	printf("$5 bills: %d\n", five);
	printf("$1 bills: %d\n", total);

	return 0;
}
