#include <stdio.h>
/**
 * main - Print the lowercase alphabets in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter  = 'z'; letter >= 'a';)
		putchar(letter);
	putchar('\n');
	return (0);
}
