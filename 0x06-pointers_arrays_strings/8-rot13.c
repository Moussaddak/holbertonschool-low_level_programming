/**
 *rot13 - encodes a string
 *@s: input
 *Return: string
 */
char *rot13(char *s)
{
char *r = s;
int i, test = 1;

char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*s != '\0')
{
i = 0;
test = 1;
while (i < 53 && test)
{
if (*s == alpha[i])
{
*s = code[i];
test = 0;
}
i++;
}
s++;
}
return (r);
}
