#include "main.h"
/**
*_islower - check if an alphabet is in lowercase
*@c: c is an ascii character
*
*Return: return value of '_islower' - 0 (uppercase) 1(lowercase);
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
