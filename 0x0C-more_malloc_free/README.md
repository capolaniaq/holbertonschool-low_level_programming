0x0C. C - More malloc, free

Foundations - Low-level programming & Algorithm  Hatching out

By Julien Barbier, co-founder & CEO at Holberton School

Learning Objectives


General
How to use the exit function
What are the functions calloc and realloc from the standard library and how to use them


Quiz questions


Question #0
To allocate enough space for an array of 10 integers (on a 64bit, Linux machine), I can use:

Answer) malloc(10 * sizeof(int))



Question #1
If I want to copy the string Holberton into a new space in memory, I can use this statement to reserve enough space for it (select all valid answers):


Answer) malloc(sizeof(Holberton))
Answer) malloc(strlen(Holberton) + 1)
Answer) malloc(10)



Question #2
malloc returns a pointer

Answer)True



Question #3
malloc returns an address

Answer)True

Question #4
What is wrong with this code:



int cp(void)
{
	    char *s;

	        s = malloc(10);
		    strcpy(s, "Holberton");
		        return (0);
}

Answer) There is no comment
Answer) malloc can fail so we should check its return value all the time before using the pointers returned by the function.


Question #5
You can do this:

free("Holberton");


Answer) No



Question #6
You can do this:

char str[] = "Holberton";
free (str);


Answer) No



Question #7
You can do this:

char *s;

s = strdup("Holberton");
if (s != NULL)
{
	    free(s);
}

Answe) Yes*




Question #8
The memory space reserved when calling malloc is on:

Answer) The heap





Question #9
What will you see on the terminal?

int main(void)
{
	    int *ptr;

	        *ptr = 98;
		    printf("%d\n", *ptr);
		        return (0);
}


Answer) Segmentation Fault




Tasks



0. Trust no one

Write a function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98*


0-malloc_checked.c


1. string_nconcat

Write a function that concatenates two strings.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string*

1-string_nconcat.c


2. _calloc_

Write a function that allocates memory for an array, using malloc.

Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL
FYI: The standard library provides a different function: calloc. Run man calloc to learn more.*

2-calloc.c



3. array_range
Write a function that creates an array of integers.

Prototype: int *array_range(int min, int max);
The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array
If min > max, return NULL
If malloc fails, return NULL*

3-array_range.c




4. _realloc_


Write a function that reallocates a memory block using malloc and free

Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
old_size is the size, in bytes, of the allocated space for ptr
and new_size is the new size, in bytes of the new memory block
The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
If new_size > old_size, the added memory should not be initialized
If new_size == old_size do not do anything and return ptr
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
Dont forget to free ptr when it makes sense
FYI: The standard library provides a different function: realloc. Run man realloc to learn more.


100-realloc.c


5. We must accept finite disappointment, but never lose infinite hope
Write a program that multiplies two positive numbers.

Usage: mul num1 num2
num1 and num2 will be passed in base 10
Print the result, followed by a new line
If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98
You are allowed to use more than 5 functions in your file
You can use bc (man bc) to check your results.

101-mul.c






























































