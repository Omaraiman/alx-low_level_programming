#include "main.h"
#include "_putcahr.c"

/**
*main - return valu
*@c: char to check
*
*Desctiption: A C program that return 1 or 0 in fuction called isupper
*
*Return: 0 , 1
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar("%d\n", c)
}
