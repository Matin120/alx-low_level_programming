#include <stdio.h>

/**
* main - program will print random alphabet in uppercase and lowercase
* Return: 0 (success)
*/
int main(void)
{
	char alphabet;
	char alpha_u;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alpha_u = 'A'; alpha_u <= 'Z'; alpha_u++)
		putchar (alpha_u);
	putchar('\n');
	return (0);
}
