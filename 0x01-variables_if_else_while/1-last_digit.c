#include<stdio.h>
#include<stdlib.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	int n = 1;

	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, n % 10);
	if (n == 0)
	{
		printf("0\n");
	}
	else if (n > 5)
	{
		printf("greater than 5\n");
	}
	else if (n < 0)
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
