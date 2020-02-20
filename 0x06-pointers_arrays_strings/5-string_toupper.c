/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@s: input
 *Return: string
 */
char *string_toupper(char *s)
{
char *r = s;
while (*s != '\0')
{
if (*s >= 97 && *s <= 122)
*s -= 32;
else
s++;
}
return (r);
}
