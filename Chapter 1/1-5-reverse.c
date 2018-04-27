#include <stdio.h>

int main() {
	printf("%4s %7s\n", "ºF", "ºC");

	int fahr;
	for (fahr = 300; fahr >= 0; fahr -= 20) {
		float celsius = (5.0/9.0) * (fahr - 32);
		printf("%3d %6.1f\n", fahr, celsius);
	}
}
