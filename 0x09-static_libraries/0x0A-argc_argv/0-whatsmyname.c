#include <stdio.h>

/**
* main - All the code runs in this function
* @argc: holds integer value
* @argv: holds string value
*/

int main(int argc, char* argv[])
{
	printf("%s\n", argv[argc - 1]);
	return 0;
}
