#include <stdio.h>

/**
* main -Entry point
*
* Return: print the size of different data types
*/

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %2d byte(s)\n", sizeof(c));
printf("Size of an int: %2d byte(s)\n", sizeof(i));
printf("Size of a long int: %2d byte(s)\n", sizeof(li));
printf("Size of a long long: %2d byte(s)\n", sizeof(lli));
printf("Size of a float: %2d byte(s)\n", sizeof(f));

return (0);
}
