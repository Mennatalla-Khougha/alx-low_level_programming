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
	int i;
	char c = 'a';

	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
