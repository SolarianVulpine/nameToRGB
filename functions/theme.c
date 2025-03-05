#include "../headers/themes.h"

void print_ascii_menu(Theme theme)
{
    switch (theme)
    {
        case THEME_DEFAULT:
            printf("===========================================================\n");
            printf("  _   _                        ___    _____   _____ ____  \n");
            printf(" | \\ | |                      |__ \\  |  __ \\ / ____|  _ \\ \n");
            printf(" |  \\| | __ _ _ __ ___   ___     ) | | |__) | |  __| |_) |\n");
            printf(" | . ` |/ _` | '_ ` _ \\ / _ \\   / /  |  _  /| | |_ |  _ < \n");
            printf(" | |\\  | (_| | | | | | |  __/  / /_  | | \\ \\| |__| | |_) |\n");
            printf(" |_| \\_|\\__,_|_| |_| |_|\\___| |____| |_|  \\_\\\\_____|____/ \n");
            printf("\n");
            printf("                  Name Color Generator\n");
            printf("===========================================================\n\n");
            break;
        case THEME_DARK:
            printf("#######################################\n");
            printf("#                                     #\n");
            printf("#         NAME COLOR GENERATOR        #\n");
            printf("#                                     #\n");
            printf("#######################################\n\n");
            break;
        case THEME_FUN:
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("  *~*~*  Name Color Generator  *~*~*\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
            break;
        default:
            printf("Unknown theme. Using default theme...\n");
            print_ascii_menu(THEME_DEFAULT);
            break;
    }

    printf("Welcome! Follow the prompts to generate a unique color from your name.\n");
    printf("Each part of your name (first, middle, last) will be converted into an RGB value.\n\n");
}
