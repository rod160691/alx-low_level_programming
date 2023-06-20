#include <stdio.h>
/**
 * main - prints alphabets in lowecase
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
