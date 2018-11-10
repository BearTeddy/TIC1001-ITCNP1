#include <stdio.h>

void multi_censor(FILE *input, FILE *words) {
    // Code simply prints input.
    // Modify to solve the task.
    int c;
    while ((c=fgetc(input))!=EOF)
        putc(c, stdout);
}

int main(void) {
    // Uncomment lines to read from file
    FILE *fp = fopen("dream.txt", "r");
    FILE *words = fopen("words.txt", "r");
    multi_censor(fp, words);

    fclose(fp);
    fclose(words);

    return 0;
}