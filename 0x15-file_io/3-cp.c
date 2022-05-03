#include "main.h"

/**
* main - copies the content of a file to another file
* @argc: number of the arguments passed to program
* @argv: array containing the arguments passed to the program
* Return: 0 on success or 97, 98, 99, and 100 depending on which failure
*/

int main(int argc, char *argv[])
{
int rd, wt, r, i, j;
char buf[BUFSIZ];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
rd = open(argv[1], O_RDONLY);
if (rd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
wt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((r = read(rd, buf, BUFSIZ)) > 0)
{
if (wt < 0 || write(wt, buf, r) != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(rd);
exit(99);
}
}
if (r < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
i = close(rd);
j = close(wt);
if (i < 0 || j < 0)
{
if (i < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rd);
if (j < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wt);
exit(100);
}
return (0);
}
