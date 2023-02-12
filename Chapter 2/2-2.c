#include <stdio.h>

#define PI 3.1415f
#define SCALE (4.0f / 3.0f)

int main(void)
{
	float volume, radius;

	printf("Enter the radius of the sphere: ");
	scanf("%f", &radius);

	volume = SCALE * PI * (radius * radius * radius);

	printf("Volume of the sphere: %.2f\n", volume);

	return 0;
}
