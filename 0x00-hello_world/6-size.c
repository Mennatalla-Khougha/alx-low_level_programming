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
long long ll;
float f;

printf("Size of a char is: %2d byte(s)\n", sizeof(c));
printf("Size of an int is: %2d byte(s)\n", sizeof(i));
printf("Size of a long int is: %2d byte(s)\n", sizeof(li));
printf("Size of a long long is: %2d byte(s)\n", sizeof(ll));
printf("Size of a float is: %2d byte(s)\n", sizeof(f));

return (0);
}
