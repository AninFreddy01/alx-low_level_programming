#include "main.h"
/**
 * times_table - Prints the mutiples of nine 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j * i);
		}
		_putchar('\n');
	}
}
