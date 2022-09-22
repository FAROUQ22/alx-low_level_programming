#include <stdio.h>

/**
 *main - entry point
 *
 * Return: 0 after printing the function
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
		putchar(10);

		return (0);
}
