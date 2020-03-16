#ifndef VAR_FCT
#define VAR_FCT
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct list - a list of types of arguments.
 * @c: First member
 * @f: Second member
 *
 * Description: a list of types of arguments passed to the function
 */
typedef struct list
{
	char c;
	void (*f)(va_list);
} list;
#endif
