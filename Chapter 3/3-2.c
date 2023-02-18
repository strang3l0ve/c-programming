#include <stdio.h>

int main(void)
{
	int i_number, month, day, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &i_number);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%-d\t\t$%7.2f\t%-.2d/%-.2d/%-d\n", i_number, price, month, day, year);

	return 0;
}
