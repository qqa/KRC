#include <stdio.h>

void banner(char input, int width)
{
	for (int i = 0; i < width; i++)
		putchar(input);
	putchar('\n');
}

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 40;
	step = 2;

	celsius = lower;

	banner('=', 12);
	printf("= Cel  Fah =\n");
	banner('=', 12);

	while(celsius <= upper) {
		fahr = (celsius * 1.8) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}

/*
 * Celsius to Fahrenheit
 * Formula used:
 * To convert temperatures in degrees Celsius to Fahrenheit, multiply by 1.8 (or
 * 9/5) and add 32.
 */
