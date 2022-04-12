#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
* *new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: NULL on failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int i, j;

i = _strlen(name);
j = _strlen(owner);

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(sizeof(char) * (i + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = malloc(sizeof(char) * (j + 1));
if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog->name);
return (NULL);
}
_strcpy(new_dog->name, name);
_strcpy(new_dog->owner, owner);
new_dog->age = age;

return (new_dog);
}

/**
* _strlen - returns the length of a string
* @s: string with unknown length
* Return: length of string
*/

int _strlen(char *s)
{

int i = 0;
if (*(s + i) != '\0')
{
i++;
}
return (i);
}


/**
* _strcpy - copies the string pointed to by src, including the
* terminating null byte (\0), to the buffer pointed to by dest
* @dest: pointer to buffer
* @src: string to be copied
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int i, j;

i = 0;

while (*(src + i) != '\0')
{
i++;
}

for (j = 0; j < i; j++)
{
*(dest + j) = *(src + j);
}
*(dest + j) = '\0';

return (dest);
}
