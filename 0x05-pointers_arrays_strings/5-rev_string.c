/**
 *rev_string - prints a string in reverse
 *@s: input
 */
void rev_string(char *s)
{
int len = 0, i;
char *b, *e, k;
b = s;
e = s;
while (*b != '\0')
{
e++;
len++;
}
b = s;
for (i = 0; i < (len / 2); i++)
{
k = *e;
e = *b;
b = k;
b++;
e--;
}
s = b;
}
