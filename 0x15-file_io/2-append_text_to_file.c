#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int op, wt, rd = 0;

if (filename == NULL)
return (-1);

op = open(filename, O_WRONLY | O_APPEND);
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
