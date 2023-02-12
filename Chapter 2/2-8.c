#include <stdio.h>

int main(void)
{
	float loan, interest, month_interest, month_pay, p1, p2, p3;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &month_pay);

	month_interest = (interest / 100) / 12;
	p1 = (loan * month_interest) + loan - month_pay;
	p2 = (p1 * month_interest) + p1 - month_pay;
	p3 = (p2 * month_interest) + p2 - month_pay;

	printf("Balance after p1: %.2f\n", p1);
	printf("Balance after p2: %.2f\n", p2);
	printf("Balance after p3: %.2f\n", p3);

	return 0;
}
