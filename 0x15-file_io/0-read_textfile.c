#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX
* standard output
* @filename: text file to be read
* @letters: number of letters it should read and print
* Return: number of letters it could read and print or 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int op, rd, wt;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

op = open(filename, O_RDONLY);
if (op < 0)
{
free(buf);
return (0);
}

rd = read(op, buf, letters);
if (rd < 0)
{
free(buf);
return (0);
}
buf[rd] = '\0';

close(op);

wt = write(STDOUT_FILENO, buf, rd);
if (wt < 0)
{
free(buf);
return (0);
}

free(buf);
return (wt);
}
