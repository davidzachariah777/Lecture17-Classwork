#include <stdio.h>
#include <math.h>

float a, b, c, ans, root1, root2;

float quadPlus (float a, float b, float c) {
	ans = (-b + (sqrt((b*b)-(4*a*c))))/(2*a);	
	return ans;
}

float quadMinus (float a, float b, float c) {
	ans = (-b - (sqrt((b*b)-(4*a*c))))/(2*a);
        return ans;
}

int main () {
	printf("Enter a value (1/3) \n");
	scanf("%f",&a);
	printf("Enter a value (2/3) \n");
        scanf("%f",&b);
	printf("Enter a value (3/3) \n");
        scanf("%f",&c);
	
	root1 = quadPlus(a,b,c);
	root2 = quadMinus(a,b,c);
	printf ("The solutions to the quadratic formula are x=%.3f and x=%.3f\n", root1, root2);
	return 0;
}
