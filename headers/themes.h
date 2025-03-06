#ifndef THEMES_H
#define THEMES_H

#include <stdio.h>

typedef enum {
    THEME_DEFAULT,
    THEME_DARK,
    THEME_TALL
} Theme;

/**
 * print_ascii_menu - Prints the ASCII menu based on the selected theme.
 * @theme: The theme to be used.
 */
void print_ascii_menu(Theme theme);

#endif /* THEMES_H */
