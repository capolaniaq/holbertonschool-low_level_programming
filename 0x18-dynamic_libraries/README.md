# 0x18. C - - Dynamic libraries
 Foundations - Low-level programming & Algorithm  Hatching out

 By Julien Barbier, co-founder & CEO at Holberton School

 Author [Carlos Andres Polania (capolaniaq@correo.udistrital.edu.co)](https://twitter.com/timberdev)

## Learning Objectives
-   What is a dynamic library, how does it work, how to create one, and how to use it
-   What is the environment variable  `$LD_LIBRARY_PATH`  and how to use it
-   What are the differences between static and shared libraries
-   Basic usage  `nm`,  `ldd`,  `ldconfig`

## Tasks
### 0. A library is not a luxury but one of the necessities of life

Create the dynamic library libholberton.so containing all the functions listed below:  
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);


If you havent coded all of the above functions create empty ones, with the right prototype.  
Dont forget to push your `holberton.h` file in your repository, containing at least all the prototypes of the above functions.

### 1. Without libraries what have we? We have no past and no future

Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

### 2. Either write something worth reading or do something worth writing

Write a blog post describing the differences between static and dynamic libraries. It should cover:

-   Why using libraries in general
-   How do they work
-   How to create them (Linux only)
-   How to use them (Linux only)
-   What are the differences between static and dynamic libraries
-   What are the advantages and drawbacks of each of them

Your posts should have examples and at least one picture, at the top. Publish your blog post on Medium or LinkedIn, and share it at least on LinkedIn.

When done, please add all urls below (blog post, LinkedIn post, etc.)

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings

