#include <stdio.h>
#include <unistd.h>

/**
 * main - Runtime start here
 *
 * Description: prints Dora's quote from 2015
 *
 * Return:  1 if Successful
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
