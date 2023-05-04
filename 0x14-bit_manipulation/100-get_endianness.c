#include "main.c"
/**
 * get_endianness - checks whether a machine is big endian or little.
 * Return: 1 little endian or 0.
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
