/**
 *_strcat - concatinate two strings together
 *@src: input
 *@dest: input
 *Return: a string
 */
char *_strcat(char *dest, char *src)
{
char *str = dest;
while (*dest != '\0')
dest++;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
return (str);
}
