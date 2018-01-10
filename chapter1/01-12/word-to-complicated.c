#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

int main()
{
	int c, state;
	char word[1000];

	state = OUT;
	int i = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			for (int j = 0; j < i; j++) {
				putchar(word[j]);
			}
			printf("\n");
			memset(&word[0], 0, sizeof(word));
		}
		else if (state == OUT) {
			state = IN;
			word[i] = c;
			++i;
		} else {
			word[i] = c;
			++i;
		}

	}
	return 0;
}
