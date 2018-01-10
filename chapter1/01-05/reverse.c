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
	upper = 300;
	step = 20;

	fahr = upper;
	banner('=', 12);
	printf("= Fah  Cel =\n");
	banner('=', 12);
	for (fahr; fahr >= lower; fahr -= step) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
	return 0;
}
