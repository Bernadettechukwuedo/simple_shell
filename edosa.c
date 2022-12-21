#include "shell.h"

int main(void)
{
	int i;

	for (i = 0; i < 3000; i++)
		printf("Number[%d]: %d\n", i, i * 3);

	return (0);
}
