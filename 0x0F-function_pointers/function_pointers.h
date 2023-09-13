#ifndef __FUNCTION_POINTER_H__
#define __FUNCTION_POINTER_H__

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
