#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int cents, coins;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coins = 0;

	while (cents != 0)
	{
		if (cents - 25 >= 0)
			cents -= 25;
		else if (cents - 10 >= 0)
			cents -= 10;
		else if (cents - 5 >= 0)
			cents -= 5;
		else if (cents - 2 >= 0)
			cents -= 2;
		else if (cents - 1 >= 0)
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (coins);
}
