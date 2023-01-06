#include <stdio.h>

/**
* main - Print the number of agument
* @argc: Count argument
* @argv: holds the array of command
* Return: always return 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
