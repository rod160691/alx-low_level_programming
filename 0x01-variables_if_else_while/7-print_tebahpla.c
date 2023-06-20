#include <stdio.h>
/**
 * main - prints alphabets in reverse
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
