#include <stdio.h>

/**
* main - program will print random alphabet
* Return: 0 (success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
