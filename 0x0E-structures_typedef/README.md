##0x0E. C - Structures, typedef

#Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

#General

1. What are structures, when, why and how to use them
2. How to use typedef

#Requirements

#General

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. The only C standard library functions allowed are printf, malloc, free and exit.
9. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
10. Don’t forget to push your header file
11. All your header files should be include guarded

1. TASKS 0: Define a new type struct dog with the following elements: 
# name, type = char *
# age, type = float
# owner, type = char *

2. TASKS 1: Write a function that initialize a variable of type struct dog
# Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

3. Write a function that prints a struct dog
# Prototype: void print_dog(struct dog *d);
# Format: see example bellow
# You are allowed to use the standard library
# If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
# If d is NULL print nothing.

3. TASKS 2: Define a new type dog_t as a new name for the type struct dog.

4. TASKS 3: Write a function that creates a new dog.
# Prototype: dog_t *new_dog(char *name, float age, char *owner);
# You have to store a copy of name and owner
# Return NULL if the function fails

5. TASKS 4: Write a function that frees dogs.
# Prototype: void free_dog(dog_t *d);


