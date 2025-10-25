#include <stdio.h>

#define DISCOUNT_RATE 0.10

float a,b,c;

int main () {
	printf("Enter price\n");
	scanf("%f",&a);
	b = a*DISCOUNT_RATE;
	c = a-b;

	printf("Discount Amount: %.2f\n", b);
       	printf("Final Price: %.2f\n", c);
	return 0;	
}
