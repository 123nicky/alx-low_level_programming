#include "main.h"
#include <stdio.h>

/**
* _strchr - locates a character in a string.
* @c: occurrence of the character
* @s: in the string
* Return: a pointer to the first occurrence of the 
*character c in the string s,
*or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
char *flag = NULL;

if (s != NULL)
{
do {
if (*s == c)
{
flag = s;
break;
}
} while (*++); 
}

return (flag);
}
