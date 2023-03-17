#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - the key of the program
 * Return: final to exit
 */
int main(void)
{
int n;
int j;
j = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (j > 5)
{ printf("last digit of %d is %d and is greater than 5\n", n, j); }
else if (j == 0)
{ printf("last digit of %d is %d and is 0\n", n, j); }
else
{ printf("last digit of %d is %d and is less than 6 and not 0\n", n, j); }
	return (0); }
