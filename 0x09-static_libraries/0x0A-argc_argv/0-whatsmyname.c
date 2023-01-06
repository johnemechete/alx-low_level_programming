#include <stdio.h>

/**
* main - Print the name of the command
* @argc: Count argument
* @argv: holds the array of command
* Return: always return 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
