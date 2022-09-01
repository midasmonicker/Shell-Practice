#include "main.h"
#include <stdio.h>

int main(void)
{
	char *buff = NULL;
	size_t n = 0;

	printf("$ ");
	_getline(&buff, &n, stdin);
	printf("%s", buff);

	return (0);
}
