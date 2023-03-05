#include <stdio.h>
#include <string.h>
/**
 * main - print the variable string using printf
 *
 * Return: 0
 */

int main(void)
{
	char n[5];
	printf("n: ");

	scanf("%c", &n);

	if (n[5] > 5)
	{
		printf("%c\n and is greater than 5", n);
	}
	if (n[5] == 0)
	{
		printf("%c\n and is 0", n);
	}
	if (n[5] < 6 && n[5] != 0)
	{
		printf("%c\n and is less than 6 and not 0", n);
	}
	return (0);
}
