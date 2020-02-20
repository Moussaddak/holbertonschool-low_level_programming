/**
 *_strcmp - compare two strings
 *@s1: input
 *@s2: input
 *Return: result of comparaison
 */
int _strcmp(char *s1, char *s2)
{
int test = 1, result;

while (test)
{
if (*s1 == '\0' && *s2 == '\0')
{
result = 0;
test = 0;
}
else if (*s1 == *s2)
{
s1++;
s2++;
}
else
{
result = *s1 - *s2;
test = 0;
}
}
return (result);
}
