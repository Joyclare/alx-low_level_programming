#include <stdio.h>
 /**
  * main - a program that prints the alphabet in lowercase with 
  * putchar function
  *
  * Return: Always (0)
  */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
