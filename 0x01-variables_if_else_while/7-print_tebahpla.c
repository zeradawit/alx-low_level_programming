#include<stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	int ch = 'z';

	for (; ch <= 'z'; ch--)
	{
		if (ch >= 'a')
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);

}
