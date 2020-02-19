/**
 *_strcpy - prints n elements of an array of integers
 *@dest: input
 *@src: input
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; *src != '\0'; i++)
{
*dest = *src;
src++;
}
return (dest);
}
