#include <stdio.h>

int main()
{
	int result = getchar() !=EOF;
	printf("result EOF is: %d\n", result);
	return 0;
}
