#include "main.h"

/**
*_asalpha - checks for alphabet is character
@c: the character to be checked
*Return: 1 if c is a letter. 0 otherwise
*/
int _isalpha(int c)
{
return((c >='a'&& c<='z') || (c >='A'&& c<='Z'))
}
