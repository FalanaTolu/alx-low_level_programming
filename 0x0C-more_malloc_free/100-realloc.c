#include "main.h"
#include <stdlib.h>

/**
* *_realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with
* a call to malloc: malloc(old_size)
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes of the new memory block
* Return: pointer to the memory allocated newly
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr, *optr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);

optr = ptr;

if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
nptr[i] = optr[i];
}

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
nptr[i] = optr[i];
}

free(ptr);
return (nptr);
}
