#include <stdio.h>
/**
 * main - print valiable n using printf
 *
 * Return: 0
*/
int main(void)
{
	int n;

	printf("n: ");
	scanf("%d", &n);


	if (n == 0)
	{
		printf("%d = 0\n is zero", n);
	}

	if (n < 0)
	{
		printf("%d < 0\n is negative", n);
	}

	if (n > 0)
	{
		printf("%d > 0\n is positive", n);
	}

	return (0);
}
