#include <stdio.h>
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf(size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes\n", (unsigned long long)sizeof(d));
	prinf(size of a float: %lu bytes \n", (unsignsed long)sizeof(f));
	return (0);
}
