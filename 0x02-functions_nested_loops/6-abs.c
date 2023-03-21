#include "main.h"

/**
*_abs - compute the absolute value of int.
*@n: int number.
*Return: 0 (Success).
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
	{
		n *=-1;
		return (n);
	}
}
