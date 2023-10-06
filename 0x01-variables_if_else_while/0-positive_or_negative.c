#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	/* Seed the random number generator with the current time */
	srand(time(0));
	
	n = rand() - (RAND_MAX / 2);

	printf("%d is ", n);

	if (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else
		printf("zero\n");

	return (0);
}
