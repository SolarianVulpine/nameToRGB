#include "headers/namecolor.h"
#include "headers/themes.h"

int main(void)
{
    int theme_selection;
    Theme selected_theme;

    // Prompt the user to select an ASCII art theme.
    printf("Select an ASCII Theme for the Menu:\n");
    printf("1. Default\n");
    printf("2. Dark\n");
    printf("3. Fun\n");
    printf("Enter your choice: ");
    scanf("%d", &theme_selection);

    // Determine the selected theme.
    switch (theme_selection)
    {
        case 1:
            selected_theme = THEME_DEFAULT;
            break;
        case 2:
            selected_theme = THEME_DARK;
            break;
        case 3:
            selected_theme = THEME_FUN;
            break;
        default:
            printf("Invalid selection, using default theme.\n");
            selected_theme = THEME_DEFAULT;
            break;
    }

    // Display the ASCII art menu with the chosen theme.
    print_ascii_menu(selected_theme);

    // Obtain user names through the dedicated input function.
    char *nameFirst = get_name("Enter your first name (for the R value): ");
    char *nameMiddle = get_name("Enter your middle name (for the G value): ");
    char *nameLast = get_name("Enter your last name (for the B value): ");

    // Compute the lengths of each name.
    int first_length = strlen(nameFirst);
    int middle_length = strlen(nameMiddle);
    int last_length = strlen(nameLast);

    // Convert the names to their respective RGB values.
    int R_Value = letter_calculator(nameFirst, first_length);
    int G_Value = letter_calculator(nameMiddle, middle_length);
    int B_Value = letter_calculator(nameLast, last_length);

    // Combine the RGB values into a hexadecimal color code.
    unsigned int hexcode = RGB_to_Hex(&R_Value, &G_Value, &B_Value);

    // Output the results.
    printf("\nYou entered: \"%s %s %s\"\n", nameFirst, nameMiddle, nameLast);
    printf("Your RGB values are: %d, %d, %d\n", R_Value, G_Value, B_Value);
    printf("Your Hex color code is: #%06X\n", hexcode);
    printf("\nThank you for using the Name Color Generator!\n");

    // Free allocated memory.
    free(nameFirst);
    free(nameMiddle);
    free(nameLast);

    return 0;
}
