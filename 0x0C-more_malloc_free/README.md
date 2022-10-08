##0x0C. C - More malloc, free

#Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

#General

1. How to use the exit function
2. What are the functions calloc and realloc from the standard library and how to use them

#Requirements

#General

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
9. You are allowed to use _putchar
10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
11. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
12. Don’t forget to push your header file

TASKS:

1. TASKS 0: function that allocates memory using malloc. 
* Prototype: void *malloc_checked(unsigned int b); 
* Returns a pointer to the allocated memory. 
* if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.

2. TASKS 1: function that concatenates two strings. 
* Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n); 
* The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated. 
* If the function fails, it should return NULL. 
* If n is greater or equal to the length of s2 then use the entire string s
* if NULL is passed, treat it as an empty string

3. TASKS 2: function that allocates memory for an array, using malloc. 
* Prototype: void *_calloc(unsigned int nmemb, unsigned int size); 
* The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. 
* The memory is set to zerO. 
* If nmemb or size is 0, then _calloc returns NULL. 
* If malloc fails, then _calloc returns NULL

4. TASKS 3: function that creates an array of integers. 
* Prototype: int *array_range(int min, int max); 
* The array created should contain all the values from min (included) to max (included), ordered from min to max. 
* Return: the pointer to the newly created array. 
* If min > max, return NULL. 
* If malloc fails, return NULL

5. TASKS 4: function that reallocates a memory block using malloc and free. 
* Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size); 
* where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size). old_size is the size, in bytes, of the allocated space for ptr. and new_size is the new size, in bytes of the new memory block.
* The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes. 
* If new_size > old_size, the “added” memory should not be initialized. 
* If new_size == old_size do not do anything and return ptr. 
* If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size. 
* If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). 
* Return NULL. 
* Don’t forget to free ptr when it makes sense

6. TASKS 5: program that multiplies two positive numbers. 
* Usage: mul num1 num2. num1 and num2 will be passed in base 10. 
* Print the result, followed by a new line. 
* If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98. 
* num1 and num2 should only be composed of digits. 
* If not, print Error, followed by a new line, and exit with a status of 98
* You are allowed to use more than 5 functions in your file






