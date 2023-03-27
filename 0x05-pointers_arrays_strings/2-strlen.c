#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the stri
 * @s: charc
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i = 0;

while (*s++)
i++;
return (i);
}
