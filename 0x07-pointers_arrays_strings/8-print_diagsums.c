#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 * @size: number matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
/*Declaring variables*/
int i;

unsigned int sum, sum1;

sum = 0;
sum1 = 0;

for (i = 0; i < n; i++)
{
/*sums for diagsums*/
sum += a[(n + 1) * 1];
sum1 += a[(n - 1) * (i + 1)];
}

printf("%i, %i\n", sum, sum1);

}
