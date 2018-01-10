#include <stdio.h>

#define MAX 11
#define IN  1
#define OUT 0

int main()
{
	int c, i, j;
	int len[MAX+1];
	int state = IN;
	int nc = 0;

	// printf("size is: %d\n", (int) (sizeof(wl)/sizeof(wl[0])));
	// empty array
	for (i=0; i < MAX; ++i)
		len[i] = 0;

	printf("get me some data\n");
	while ((c = getchar()) != EOF) {
		nc++;
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			--nc;
		}
		if (state == OUT) {
			if (nc != 0 && nc <= MAX)
				++len[nc];
			state = IN;
			nc = 0;
		}
	}

	for (i = 1; i <= MAX; ++i) {
		printf("%2d|| ", i);
		for (j = 0; j <len[i]; ++j)
			putchar('=');
		putchar('\n');
	}
	return 0;
}

/* 
 * print a histogram of the lenghts o word in its input. bars horizontal is
 * easy.
 * program setup
 *
 * while input get word length
 * register word length in array based on position of array
 * printout array
 */
