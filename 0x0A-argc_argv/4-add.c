#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Sum up numbers and
 * print error for non digit
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 *
 * Return: 0 on success, 1 if not given two arguments
 */

int main(int argc, char *argv[])
{
	int i, word, sum = 0;

	word = 1;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (word < argc)
	{
		for (i = 0; argv[word][i] != '\0'; i++)
		{
			if (!(isdigit(argv[word][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[word]);
		word++;
	}
	printf("%d\n", sum);
	return (0);
}
