#include <stdio.h>
/**
 * main - prints alphabets in lowecase
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char numbers = '0';
	char letters = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while  (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
