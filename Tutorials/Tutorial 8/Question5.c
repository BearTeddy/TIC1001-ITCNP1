#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void to_upper(FILE *in, FILE *out) {
    char c=' ';
    bool bol = true; //First Char is bold
    while ((c = fgetc(in)) != EOF) //getting char by char
    {   
        if(bol == true) {
            if(c>='a' && c<='z'){
                c -= 'a'-'A';
            }
            bol=false; // Dont allow uppercases anymore
        }
        if(isspace(c)){
                bol = true; // Next word need to be UPPERCASE
        }
        fprintf(out,"%c",c);
    }
}

int main (void){
    FILE *fp = fopen("wind.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && f2 != NULL){
        to_upper(fp,f2);
        fclose(fp);
        fclose(f2);
    }
    return 0;
}