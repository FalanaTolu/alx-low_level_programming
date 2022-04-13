#ifndef FUNC_H
#define FUNC_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNC_H */
