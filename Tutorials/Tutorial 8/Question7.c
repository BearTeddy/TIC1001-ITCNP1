#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void to_upper(FILE *in, FILE *out) {
    char c;
    bool bol = true;
    while ((c = fgetc(in)) != EOF) //getting char by char
    {

        if(!isspace(c) && bol==true){
            if(c>='a' && c<='z') {
                c-=32;
            }
            bol=false;
        }
        if (c=='.'){
            bol=true;
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