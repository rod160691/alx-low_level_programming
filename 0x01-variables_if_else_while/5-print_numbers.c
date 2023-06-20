#include <stdio.h>
/**
 * main - print numbers of base ten
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int base_ten = 0;

	while (base_ten <= 9)
	{
		char digit = base_ten + '0';
		putchar(digit);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
