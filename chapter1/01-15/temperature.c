#include <stdio.h>

void banner(char input, int width)
{
	for (int i = 0; i < width; i++)
		putchar(input);
	putchar('\n');
}

float FtoC (float fahr) 
{
	float celsius;
	celsius = (5.0/9.0) * (fahr-32.0);
	return celsius;
}

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	banner('=', 12);
	printf("= Fah  Cel =\n");
	banner('=', 12);
	while (fahr <= upper) {
		celsius = FtoC(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}
