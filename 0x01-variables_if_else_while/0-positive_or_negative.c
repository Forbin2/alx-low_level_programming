#include <stdio.h>
/**
 * main - print valiable n using printf
 *
 * Return: 0
*/
int main(void)
{
	double n;

	n = 'double';


	if (n > 0)
	{
		printf("%f\n is positive", n);
	}
	if (n == 0)
	{
		printf("%f\n is zero", n);
	}

	if (n < 0)
	{
		printf("%f\n is negative", n);
	}

	return (0);
}
