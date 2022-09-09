#include<stdio.h>
#include<time.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
int n;
n = rand(100);

if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("0 is zero\n");
}
return (0);
}
