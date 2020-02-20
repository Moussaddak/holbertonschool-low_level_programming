/**
 *rot13 - encodes a string
 *@s: input
 *Return: string
 */
char *rot13(char *s)
{
char *r = s;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char code[] = "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA";
while (*s != '\0')
{
i = 0;
while (i < 53)
{
if (*s == alpha[i])
*s = code[i];
i++
}
s++;
}
return (r);
}
