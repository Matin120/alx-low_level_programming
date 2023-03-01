#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int pass[100];
	inti, sum, n;

	sum = 0;

	srand(time(NULL));


