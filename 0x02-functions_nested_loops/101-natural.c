#include <stdio.h>
/**
 * main -  computes and prints the sum of all the multiples of 3 or 5 below 1024 
 *
 * Return: nothings (Success)
 */
int main()
{
	int i, sum;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		if (i % 5 ==)
			sum += i; 
	}
	printf("%d\n", sum);
}
