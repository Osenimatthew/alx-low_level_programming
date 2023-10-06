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

	/* seed the random number generator with the current time */
	srand(time(0));

	/* Generate random number between INT_MIN and INT_MAX */
	n = rand() - (RAND_MAX / 2);

	printf("%d is ", n);

	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");

	return (0);
}	