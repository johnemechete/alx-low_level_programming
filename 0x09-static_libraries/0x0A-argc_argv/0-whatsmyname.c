#include <stdio.h>

/**
* main - Print the name of the command
* @argc: Count argument
* @argv: holds the array of command
* Return: always return 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
