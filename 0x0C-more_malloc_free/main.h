#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max); 
void *_calloc(unsigned int nmemb, unsigned int size);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_strncat(char *dest, char *src, int n);

#endif /*MAIN_H*/
