#include <stdio.h>

/**
 * main - prints the Fizz-Buzz test
 *
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("%s ", "FizzBuzz");
		else if (x % 3 == 0)
			printf("%s ", "Fizz");
		else if (x % 5 == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", x);
	}
	putchar('\n');
	return (0);
}
