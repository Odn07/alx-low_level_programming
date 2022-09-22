##0x06. C - More pointers, arrays and strings

#Learning Objectives:

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

#General

1. What are pointers and how to use them
2. What are arrays and how to use them
3. What are the differences between pointers and arrays
4. How to use strings and how to manipulate them
   Scope of variables

#Requirements:

#General

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
9. You are allowed to use _putchar
10. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
11. Don’t forget to push your header file

0. TASKS 0: A function that concatenates two strings. Prototype: char *_strcat(char *dest, char *src); This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte. Returns a pointer to the resulting string dest.
1. TASKS 1: A function that concatenates two strings. Prototype: char *_strncat(char *dest, char *src, int n); The _strncat function is similar to the _strcat function, except that: it will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes. Return a pointer to the resulting string dest.
2. TASKS 2: A function that copies a string. Prototype: char *_strncpy(char *dest, char *src, int n); Your function should work exactly like strncpy.
3. TASKS 3: A function that compares two strings. Prototype: int _strcmp(char *s1, char *s2); Your function should work exactly like strcmp.
4. TASKS 4: A function that reverses the content of an array of integers. Prototype: void reverse_array(int *a, int n); Where n is the number of elements of the array.
5. TASKS 5: A function that changes all lowercase letters of a string to uppercase. Prototype: char *string_toupper(char *);
6. TASKS 6: A function that capitalizes all words of a string. Prototype: char *cap_string(char *); Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
7. TASKS 7: A function that encodes a string into 1337. Letters a and A should be replaced by 4; Letters e and E should be replaced by 3; Letters o and O should be replaced by 0; Letters t and T should be replaced by 7; Letters l and L should be replaced by 1; Prototype: char *leet(char *); You can only use one 'if' in your code; You can only use two loops in your code; You are not allowed to use switch; You are not allowed to use any ternary operation.
8. TASKS 8: 









