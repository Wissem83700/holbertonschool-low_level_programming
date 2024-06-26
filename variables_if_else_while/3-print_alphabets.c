#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * Prints the alphabet in lowercase,
 * then in uppercase, followed by a new line.
 *
 * Return:
 * Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n'); /* Print a new line */

	return (0); /* Return statement with parentheses */
}
