#include <stdio.h>
/**
 * main - the key of the program
 * Return: final to exit
 */
int main(void)
{ int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
