#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	printf("Sizeof a char: %lu byte(s)\n", sizeof(char));
	printf("Sizeof an int: %lu byte(s)\n", sizeof(int));
	printf("Sizeof a long int: %lu byte(s)\n", sizeof(long int));
	printf("Sizeof a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Sizeof a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
