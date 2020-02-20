/**
 *_strncpy - copy the first n characters of the src into dest
 *@dest: input
 *@src: input
 *@n: input
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
char *r = dest;

while (*src != '\0' && i != n)
{
*dest = *src;
src++;
dest++;
i++;
}
for (; i < n; i++)
*dest = '\0';
return (r);
}
