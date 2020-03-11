/**
 *print_name - function that prints a name
 *@name: pointer to string
 *@f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name && f != NULL)
	{
		(*f)(name);
	}
}
