#include <stdio.h>
/**
* main - Runs the code
* Description: prints the numbers from 1 to 100, followed by a new line
* But for multiples of three print Fizz instead of the number and for the
* multiples of five print Buzz. For numbers which are multiples of both
* three and five print FizzBuzz.
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Fuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
