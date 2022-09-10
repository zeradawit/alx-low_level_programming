#include<stdio.h>
#include<stdlib.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
int s;
int last;
last = s % 10;
s = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d and is ", s, last);
if (s == 0)
{
	printf("0\n");
}
else if (s > 5)
{
	printf("greater than 5\n");
}
else if (s < 0)
{
	printf("less than 6 and not 0\n");
}
return (0);
}
