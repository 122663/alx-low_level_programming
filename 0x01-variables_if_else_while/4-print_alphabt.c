#include <stdio.h>
/**
 * main - the key of the program
 * Return: final to exit
 */
int main(void)
{ int i;
for (i = 97; i < 123; ++i)
{
if (i == 101 || i == 113)
{ i++;
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
