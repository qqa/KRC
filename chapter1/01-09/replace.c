#include <stdio.h>

int main()
{
	int c;
	int received_blank = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (!received_blank) {
				putchar(c);
				received_blank = 1;
			}

		} else {
			putchar(c);
			received_blank = 0;
		}
	}
	return 0;
}
