#include<stdio.h>
/**
   * main - Entry point
    *
     * Return: Always 0 (Success)
      */
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
	if (ch == 'p')	
	{
		ch = "\p";
	}
	else if (ch == 'q')
	{
		ch = "\q";
	}
		putchar(ch);
		putchar('\n');
	}
	return (0);
}

