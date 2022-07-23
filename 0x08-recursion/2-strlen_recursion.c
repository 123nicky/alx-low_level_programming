#include "main.h"
/**
* _strlen_recursion - returns the length of a string.
* @s: string to count
* Return: the length of a string.
*/
int _strlen_recursion(char *s)
{
/*base condition*/
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
