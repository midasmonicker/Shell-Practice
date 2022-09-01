#include <stdio.h>
#include <string.h>

int main(void)
{
	char *buff = NULL;
	size_t n = 0;
	char *parse;
	char *delim = " \n";

	printf("$ ");
	getline(&buff, &n, stdin);
	printf("%s", buff);

	strtok

	return (n);
}
