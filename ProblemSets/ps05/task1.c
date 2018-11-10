#include <stdio.h>

void censor(FILE *input, const char *match, const char *replace) {
    // Code simply prints input.
    // Modify to solve the task.
    int c;
    while ((c=fgetc(input))!=EOF)
        putc(c, stdout);
}

int main(void) {
    // Uncomment lines to read from file
    // FILE *fp = fopen("filename", "r");
    // censor(fp, "dog", "***");
    // fclose(fp);

    // Or read from stdin. Press Ctrl+D to send EOF in stdin
    censor(stdin, "dog", "***");

    return 0;
}