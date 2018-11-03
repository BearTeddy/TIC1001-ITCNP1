#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void interleave(FILE *in1, FILE *in2, FILE *out) {
    char a[1000];
    char b[1000];
    while (fgets(a,1000,in1) != NULL && fgets(b,1000,in2) != NULL) {
        fputs(a,out);
        fputs(b,out);
    }
    while (fgets(a,1000,in1) != NULL){
         fputs(a,out);
    }
    while(fgets(b,1000,in2) != NULL){
         fputs(b,out);
    }
}

int main (void){
    FILE *fp = fopen("wind.txt","r");
    FILE *fq =fopen("pop.text","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && fq != NULL && f2!=NULL){
        interleave(fp,fq,f2);
        fclose(fp);
        fclose(fq);
        fclose(f2);
    }
    return 0;
}