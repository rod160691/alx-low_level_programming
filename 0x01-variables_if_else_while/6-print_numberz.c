#include <stdio.h>
/**
 * main - print digits without char
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
