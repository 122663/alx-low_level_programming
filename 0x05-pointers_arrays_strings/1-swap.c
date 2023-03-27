#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the charc a et b
 * @a: first char
 * @b: second char
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
