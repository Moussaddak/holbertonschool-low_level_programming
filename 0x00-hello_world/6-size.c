#include <stdio.h>
/**
*main - display size of various type
*Return: 0
*/
int main(void)
{
printf("Size of char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
printf("Size of a float: %d bytes(s)\n", sizeof(float));
return (0);
}
