#include <stdio.h>
/**
 * main - This code prints single digits
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar (i + '0');
	putchar('\n');
	return (0);
}
