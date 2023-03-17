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
int is;
srand(time(0));
n = rand() - RAND_MAX / 2;
is = n % 10;
if (is > 5)
{ printf("last digit of %d is %d and is greater than 5\n", n, is); }
else if (is == 0)
{ printf("last digit of %d is %d and is 0\n", n, is); }
else
{ printf("last digit of %d is %d and is less than 6 and not 0\n", n, is); }
	return (0); }
