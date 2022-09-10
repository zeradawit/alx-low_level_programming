#include<stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	int ch = 'a';
	int nu = '0';

	for (; nu <= '9'; nu++)
	{
		putchar(nu);
	}
	for (; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
