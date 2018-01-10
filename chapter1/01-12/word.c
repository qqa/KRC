#include <stdio.h>
#include <string.h>

int main()
{
	int c, breakpoint;

	breakpoint = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if(!breakpoint) {
				putchar('\n');
				breakpoint = 1;
			}
		} else {
			putchar(c);
			breakpoint = 0;
		}
	}
}
