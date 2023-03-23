#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - beginig
 * Return: always 0
 */
void print_most_numbers(void)
{
int i = 48;
while (i <= 57)
{
if (!(i == '2' || i == '4'))
_putchar(i);
i++; }
_putchar('\n');
}
