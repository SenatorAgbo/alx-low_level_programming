#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it to STDOUT
 * @filename: readable text
 * @letter: number of the letters to be read
 *
 * Return: w- the actual number of letters it could read and print
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t fd;
        char *buf;
        ssize_t fd;
        ssize_t q;
        
        fd = fopen (filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	fclose(fd);
	return (w);
}
