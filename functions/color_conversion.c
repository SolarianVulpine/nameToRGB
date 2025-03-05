#include "../headers/namecolor.h"

int letter_calculator(char *str, int size)
{
    int *values;
    int i;
    int total = 0;
    
    // Allocate enough memory to store numeric values of each letter.
    values = (int *) malloc((size * sizeof(int)) + 1);
    if (!values) {
        fprintf(stderr, "Memory allocation error in letter_calculator.\n");
        exit(1);
    }
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            values[i] = toupper(str[i]) - 64;
        }
        else
        {
            values[i] = 0;  // Non-alphabet characters yield a 0.
        }
    }
    
    for (i = 0; i < size; i++)
    {
        total += values[i];
    }
    
    total = total * 4;
    while (total > 255)
    {
        total -= 256;
    }
    
    free(values);
    return total;
}

unsigned int RGB_to_Hex(int *R, int *G, int *B)
{
    // Combine the 8-bit values of each channel into a single hex integer
    unsigned int hexcode = ((*R & 0xFF) << 16) | ((*G & 0xFF) << 8) | (*B & 0xFF);
    return hexcode;
}
