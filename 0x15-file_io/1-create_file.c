#include "main.h"

/**
* create_file - creates a non-empty file
* @filename: name of the file to create
* @text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int op, wt;
int rd = 0;

if (filename == NULL)
return (-1);

op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (op < 0)
return (-1);

if (text_content)
{
while (text_content[rd])
rd++;
wt = write(op, text_content, rd);
if (wt != rd)
return (-1);
}

close(op);

return (1);
}
