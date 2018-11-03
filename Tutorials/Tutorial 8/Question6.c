#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void reverse(FILE *in, FILE *out) {
    char c;
    char arr[500];
    int i;
    fseek(in,0,SEEK_SET);
    for ( i=0; (c=fgetc(in)) != EOF;i++) //getting char by char
    {
        if(c!='\n' || c!=EOF ) arr[i]=c;
        if(c=='\n'){
            while (i>=0){
            if(arr[i] != '\n') // Remove First line because it screws up the Start of the File with \n
            fprintf(out,"%c",arr[i]);
            i--;
            }
            fprintf(out,"\n");
        }
    }
}

int main (void){
    FILE *fp = fopen("wind.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && f2 != NULL){
        reverse(fp,f2);
        fclose(fp);
        fclose(f2);
    }
    return 0;
}