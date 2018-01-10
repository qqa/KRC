#include <stdio.h>

int main()
{
	printf("Hello world!\n");
	printf("Alert\a:\n");
	printf("Backspace\b:\n");
	printf("Formfeed\f:\n");
	printf("Newline\n:\n");
	printf("Carriage REturn\r:\n");
	printf("Horizental tab\t:\n");
	printf("Vertical tab\v:\n");
	printf("Backslash\\:\n");
	printf("Single quitation mark\':\n");
	printf("Double quitation mark\":\n");
	printf("Question mark\?:\n");
	return 0;
}
/*
 * all escape sequences in C
 * Escape sequence	Hex value in ASCII	Character represented
 * \a	07	Alert (Beep, Bell) (added in C89)[1]
 * \b	08	Backspace
 * \f	0C	Formfeed
 * \n	0A	Newline (Line Feed); see notes below
 * \r	0D	Carriage Return
 * \t	09	Horizontal Tab
 * \v	0B	Vertical Tab
 * \\	5C	Backslash
 * \'	27	Single quotation mark
 * \"	22	Double quotation mark
 * \?	3F	Question mark (used to avoid trigraphs)
 * \nnnnote 1	any	The byte whose numerical value is given by nnn
 * interpreted as an octal number
 * \xhh…	any	The byte whose numerical value is given by hh…
 * interpreted as a hexadecimal number
 * \enote 2	1B	escape character (some character sets)
 * \Uhhhhhhhhnote 3	none	Unicode code point where h is a hexadecimal
 * digit
 * \uhhhhnote 4	none	Unicode code point below 10000 hexadecimal
 */
