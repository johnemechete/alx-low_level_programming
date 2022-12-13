#include "main.h"

/**
* main - Runtime starts here
*
* Description: This code is to test an external fuction
*
* Return: always 0
*/

int main(void)
{
	char c[10] = "_putchar";
	int n;
	int i;

	for (i = 0; i <= 10; i++)
	{
		n = (int) c[i];
		_putchar(n);

	}
	_putchar('\n');
	return (0);
}
