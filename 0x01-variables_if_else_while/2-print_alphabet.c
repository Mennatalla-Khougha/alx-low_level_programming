#include <stdio.h>

/**
*main - Entry point
*
* Description: function to print the alphabet in order
*
* Return: The alphbet on one line
*/

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar("%c", i);
	}
	putchar("\n");
	return (0);
}
