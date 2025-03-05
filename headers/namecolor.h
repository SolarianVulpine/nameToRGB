#ifndef NAMECOLOR_H
#define NAMECOLOR_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

// Function prototypes

/**
 * letter_calculator - Converts a given string into an RGB value.
 * @str: The string to be converted.
 * @size: The length of the string.
 *
 * Return: The computed RGB value.
 */
int letter_calculator(char *str, int size);

/**
 * RGB_to_Hex - Converts RGB color values to a hexadecimal color code.
 * @R: Pointer to the Red value.
 * @G: Pointer to the Green value.
 * @B: Pointer to the Blue value.
 *
 * Return: The hex code as an unsigned integer.
 */
unsigned int RGB_to_Hex(int *R, int *G, int *B);

/**
 * get_name - Prompts the user for a name, allocates memory, and returns the input.
 * @prompt: The prompt text to display.
 *
 * Return: A pointer to the allocated string containing the user's input.
 */
char *get_name(const char *prompt);

#endif /* NAMECOLOR_H */
