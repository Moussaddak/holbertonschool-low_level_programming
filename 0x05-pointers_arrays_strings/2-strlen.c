/**
 *_strlen - count the nbre of characters of string
 *@s: input
 *Return: length of string
 */
int _strlen(char *s)
{
int count = 0;
char *sc;
sc = s;
while (*sc != '\0')
{
sc++;
count++;
}
return (count);
}
