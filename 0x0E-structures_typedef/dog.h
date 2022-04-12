#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog type
* @name: First member
* @age: Second member
* @owner: Third member
*/

struct dog
{
	char  *name;
	float age;
	char  *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
nt _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif /* DOG_H */
