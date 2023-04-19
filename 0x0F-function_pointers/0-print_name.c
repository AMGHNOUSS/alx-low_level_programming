#include "function_pointers.h"
/**
 * print_name - Print a name.
 * @name: String
 * @f: Function pointers.
 * Return: Nothings
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
