#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void copy(FILE *in, FILE *out) {
    char c;
    bool bol = true;
    while ((c = fgetc(in)) != EOF) //getting char by char
    {
        fputc(c,out);
    }
}

int main (void){
    FILE *fp = fopen("wind.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && f2 != NULL){
        copy(fp,f2);
        fclose(fp);
        fclose(f2);
    }
    return 0;
}