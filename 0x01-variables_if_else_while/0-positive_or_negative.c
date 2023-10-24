#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This code will assign a random number to a variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negetive", n);
	printf("\n");
	return (0);
}
