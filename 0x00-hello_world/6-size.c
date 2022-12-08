#include <stdio.h>

/**
  *main - Entry point
  *
  *prints to stdout the size of data types
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	int i;
	char c;
	long l;
	float f;
	long long int ll;
	long int li;


	printf("Size of a char: %lu byte(s)\n",(unsigned long) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
}
