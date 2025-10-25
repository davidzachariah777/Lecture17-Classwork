#include <stdio.h>
#include <math.h>

float a,b;

int main() {
	printf("Enter a value: ");
	scanf("%f",&a);
	b = sqrt(a);
	printf("The square root of %f is %.2f\n\n", a, b);
	return 0;
}
