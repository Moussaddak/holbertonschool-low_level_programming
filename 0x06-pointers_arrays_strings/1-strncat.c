/**
 *_strncat - add str2 into str1 and stop at n characeter
 *@src: input
 *@dest: input
 *@n: input;
 *Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
char *str = dest;
while (*dest != '\0')
dest++;
while (*src != '\0' && i != n)
{
*dest = *src;
dest++;
src++;
i++;
}
return (str);
}
