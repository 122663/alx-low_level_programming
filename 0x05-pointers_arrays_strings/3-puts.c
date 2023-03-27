#include "main.h"

/**
 * _puts - check the char
 * @str: the char
 * Return: Always 0.
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
