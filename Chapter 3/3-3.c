#include <stdio.h>

int main(void)
{
	int gs1, group, publisher, item, digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &digit);

	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", group);
	printf("Publisher code: %d\n", publisher);
	printf("Item number: %d\n", item);
	printf("Check digit: %d\n", digit);

	return 0;
}
