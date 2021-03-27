#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*writes the character c to stdout */
int _putchar(char c);

/*function that converts a binary number to an unsigned int*/
unsigned int binary_to_uint(const char *b);

/* function that return power of 2 in index indicated*/
int potencia(int i);

/* function that return lenght of the string*/
unsigned int strlentotal(const char *b);

/*function that print ceros for complete*/
void print_cero(int i, int j);

/*function that prints the binary representation of a number.*/
void print_binary(unsigned long int n);

/*function that returns the value of a bit at a given index.*/
int get_bit(unsigned long int n, unsigned int index);

/*function that sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/*function that sets the value of a bit to 0 at a given index*/
int clear_bit(unsigned long int *n, unsigned int index);

/*function that returns the number of bits you would need to flip*/
/*to get from one number to another.*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);


#endif /*_HOLBERTON_H_*/
