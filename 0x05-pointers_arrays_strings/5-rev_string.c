/**
 *rev_string - prints a string in reverse
 *@s: input
 */
void rev_string(char *s)
{
int len = 0, i;
char *e, k;
e = s;
while (*e != '\0')
{
e++;
len++;
}
e--;
for (i = 0; i < (len / 2); i++)
{
k = *e;
*e = *s;
*s = k;
s++;
e--;
}
}
