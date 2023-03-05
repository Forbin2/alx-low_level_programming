#include <stdio.h>
/**
 * main - print the combination digits
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 89; x++)
	{
		putchar(x + '0');
		putchar(',');
		putchar('\n');
	}
	return (0);
}
