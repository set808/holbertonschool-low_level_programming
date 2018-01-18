#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of a random number assigned to
 * int n
 * Return: returns 0
 */
int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s%d%s%d ", "Last digit of ", n, " is ", last_digit);
	if (last_digit > 5)
		printf("%s", "and is greater than 5");
	else if (last_digit == 0)
		printf("%s", "and is 0");
	else if (last_digit < 6 && last_digit != 0)
		printf("%s", "and is less than 6 and not 0")
	return (0);
}
