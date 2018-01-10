#include <stdio.h>

int main()
{
	int c;
	int nline, tab, blank;
	nline = tab = blank = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			nline++;
		if (c == '\t')
			tab++;
		if (c == ' ')
			blank++;
	}
	printf("newlines -> tabs -> blanks -> : %d %d %d\n", nline, tab, blank);
	return 0;
}
