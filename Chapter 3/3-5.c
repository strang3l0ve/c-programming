#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, row_a, row_b, row_c, row_d, column_a, column_b, column_c, column_d, diagonal_a, diagonal_b;

	printf("Enter the numbers from 1 to 16 in any order\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);

	row_a = a + b + c + d;
	row_b = e + f + g + h;
	row_c = i + j + k + l;
	row_d = m + n + o + p;

	column_a = a + e + i + m;
	column_b = b + f + j + n;
	column_c = c + g + k + o;
	column_d = d + h + l + p;

	diagonal_a = a + f + k + p;
	diagonal_b = d + g + j + m;

	printf("%d %d %d %d\n", a, b, c, d);
	printf("%d %d %d %d\n", e, f, g, h);
	printf("%d %d %d %d\n", i, j, k, l);
	printf("%d %d %d %d\n", m, n, o, p);
	printf("Row sums: %d %d %d %d\n", row_a, row_b, row_c, row_d);
	printf("Column sums: %d %d %d %d\n", column_a, column_b, column_c, column_d);
	printf("Diagonal sums: %d %d\n", diagonal_a, diagonal_b);

	return 0;
}
