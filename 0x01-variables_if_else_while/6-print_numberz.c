#include <stdio.h>

/**
* main - program will print random alphabet
* Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
