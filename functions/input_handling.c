#include "../headers/namecolor.h"

char *get_name(const char *prompt)
{
    char *name;
    int n;

    // Allocate initial memory for the name.
    name = (char *) malloc(50 * sizeof(char));
    if (!name)
    {
        fprintf(stderr, "Memory allocation error in get_name.\n");
        exit(1);
    }

    printf("%s", prompt);
    scanf("%s", name);

    // Reallocate memory to fit the exact size of the input.
    n = strlen(name);
    char *tmp = (char *) realloc(name, (n + 1) * sizeof(char));
    if (!tmp)
    {
        fprintf(stderr, "Memory reallocation error in get_name.\n");
        free(name);
        exit(1);
    }
    name = tmp;
    return name;
}
