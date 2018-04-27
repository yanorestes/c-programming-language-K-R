#include <stdio.h>

int main() {
	float fahr, celsius;
	int upper, step;
	
	fahr = 0;
	upper = 300;
	step = 20;

	printf("%4s %7s\n", "ºF", "ºC");
	
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += 20;
	}
}
