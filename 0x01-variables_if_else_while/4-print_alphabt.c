#include <stdio.h>
/**
 * main - the key of the program
 * Return: final to exit
 */
int main(void)
{ int i;
i = 97;
while (i <= 122)
{
if (i == 101 || i == 113)
{ i++;
continue;
}
putchar(i);
i++;
}
putchar('\n');
return (0);
}
