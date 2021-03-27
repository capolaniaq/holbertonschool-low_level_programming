#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*function that converts a binary number to an unsigned int*/
unsigned int binary_to_uint(const char *b);

/***/
int potencia(int i);

/**/
unsigned int strlentotal(const char *b);

/**/
unsigned int strlenfunctional(const char *b);

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
