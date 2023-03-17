#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main function -> check if a  number is >0 or <0
*
*Return: return 0 every-time
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printf("is positive");
	else if(n<0)
		printf("is negative");
	else
		printf("is zero");
	return (0);
}

