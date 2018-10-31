#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void to_upper(FILE *in, FILE *out) {
    char c=' ';
    while (c != EOF) //getting char by char
    {   
        c = fgetc(in);
         if(c>='a' && c<='z'){
            c -= 'a'-'A';
         }
        fprintf(out,"%c",c);
    }
}

int main (void){
    FILE *fp = fopen("pop.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && f2 != NULL){
        to_upper(fp,f2);
        fclose(fp);
        fclose(f2);
    }
    return 0;
}