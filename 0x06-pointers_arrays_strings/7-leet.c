/**
 *leet - encodes a string
 *@s: input
 *Return: string
 */
char *leet(char *s)
{
char *r = s;
char lower[6] = {'a', 'e', 'o', 't', 'l'};
char upper[6] = {'A', 'E', 'O', 'T', 'L'};
char code[6] = {'4', '3', '0', '7', '1'};
int i;
while (*s != '\0')
{
i = 0;
while (i < 5)
{
if (*s == upper[i] || *s == lower[i])
*s = code[i];
i++;
}
s++;
}
return (r);
}
