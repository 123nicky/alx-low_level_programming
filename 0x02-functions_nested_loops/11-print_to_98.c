/*
*File: 11-print_to_98.c
*Auth: Dr Marcus Imagwe
*/
#include <stdio.h>
/**
* print_to_98 - print to 98
* @n : number to start from
* Return:0 or 1
*/
void print_to_98(int n)
{
while (n < 98)
{
printf("%i, ", n);
n++;
}
while (n > 98)
{
printf("%i, ", n);
n--;
}
printf("98");
putchar('\n');
}
