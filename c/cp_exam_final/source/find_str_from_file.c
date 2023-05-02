#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char buffer[BUFSIZ];
    char *search_string = "Hello, World!";

    if ((fp = fopen("inputs\\input.txt", "r")) == NULL) {
        fprintf(stderr, "Error while opening file.\n");
        return 1;
    }

    size_t bytes_read;
    while ((bytes_read = fread(buffer, 1, BUFSIZ, fp)) > 0) {
        if (strstr(buffer, search_string)) {
            printf("The string '%s' was found in the file.\n", search_string);
            fclose(fp);
            return 0;
        }
    }
    fclose(fp);
    printf("The string '%s' was not found in the file.\n", search_string);

    return 0;
}