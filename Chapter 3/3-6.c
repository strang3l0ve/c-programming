#include <stdio.h>

int main(void)
{
	int num1, num2, den1, den2, num3, den3;

	printf("Enter the two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1,&den1,&num2,&den2);

	num3 = (den2 * num1) + (den1 * num2);
	den3 = den1 * den2;

	printf("The sum is %d/%d\n", num3, den3);

	return 0;
}
