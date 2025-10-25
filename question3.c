#include <stdio.h>

float a,b,sum,product;

int main () {

	printf("Enter a floating-point number: \n");
	scanf("%f",&a);
	printf("Enter another floating-point number: \n");
	scanf("%f", &b);

	sum = a+b;
	product = a*b;

	printf("The sum of %f and %f is %.2f\n", a,b,sum);
	printf("The product of %f and %f is %.3f\n", a,b,product);

	return 0;
}
