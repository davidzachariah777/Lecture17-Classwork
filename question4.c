#include <stdio.h>

float cel,kel;

float toKelvin(float celsius) {
        float kelvin = celsius+273.15;
        return kelvin;
}

int main () {
	printf("Enter a temperature in Celsius: \n");
	scanf("%f",&cel);
	kel = toKelvin(cel);
	printf("%.2f degrees Celsius is %.2f degrees Kelvin\n",cel,kel);
	return 0;
}
