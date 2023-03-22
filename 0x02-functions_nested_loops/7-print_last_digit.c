#include "main.h"
/**
 * print_last_digit - puts the last digit
 * @n: character
 * Return: void
 */
int print_last_digit(int n)
{
int ld;
ld = n % 10;
if (ld < 0)
{ ld = ld * -1; }
_putchar(ld + '0');
return (ld);
}
