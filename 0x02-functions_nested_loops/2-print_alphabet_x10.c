#include "main.h"
/**
 * print_alphabet - Make the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{ int i, n;
for (n = 0; n < 10; n++)
{
i = 97;
while (i < 123)
{ _putchar(i);
i++; }
_putchar('\n');
}
}
