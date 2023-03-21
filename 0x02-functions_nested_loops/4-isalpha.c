/**
 * _isalpha - Make the condition
 * @c: charactere to be traited
 * Return: void
 */
int _isalpha(int c)
{
if ((c > 96 && c  < 123) || (c > 64 && c < 91))
{
return (1);
}
return (0);
}
