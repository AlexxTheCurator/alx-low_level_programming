#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');
	return (0);
}
