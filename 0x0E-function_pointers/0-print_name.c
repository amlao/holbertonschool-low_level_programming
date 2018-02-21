#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: fucntion pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		return;
	if (f != NULL)
		return;
	f(name);
}
