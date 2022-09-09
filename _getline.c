#include "main.h"

/**
 * _getline - reads an entire line from stream
 * @buff: address of buffer for storing the strings
 * @n: size of the buffer
 * @stdin: file stream for getting user input
 *
 * Return: contents of buffer
 */
size_t _getline(char **buff, size_t *n, FILE *stdin)
{
	buff = malloc(sizeof(char) * n);
	*buff = read(stdin);

	return (n);
}