#include "factors.h"

/**
 * main - Entry point to RSA
 * 
 * @argc:
 * @argv:
 * 
 * Returns: Nothing
 */
int main(int argc, char *argv[]) 
{
    FILE *file;
    char *line = NULL;
    size_t line_size = 0;
    ssize_t line_length;
    ullong number;

    if (argc != 2) {
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((line_length = getline(&line, &line_size, file)) != -1) {
        if (line[line_length - 1] == '\n') {
            line[line_length - 1] = '\0';
        }

        number = strtoull(line, NULL, 10);
        factorize(number);
    }

    free(line);
    fclose(file);
    return 0;
}
