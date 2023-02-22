#include <stdio.h>

/**
* main - program will print base 16 numbers
* Return: 0 (success)
*/

int main(void)
{
	char i;
	int hex;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
