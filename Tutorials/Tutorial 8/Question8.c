#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void interleave(FILE *in1, FILE *in2, FILE *out) {
    char *a;
    char *b;
    char t[1000];
    do{
        if(( a= fgets(t,1000,in1))){
            fputs(t,out);
        }
        if(( b= fgets(t,1000,in2))){
            fputs(t,out);
        }
    }while(a || b);
}

int main (void){
    FILE *fp = fopen("wind.txt","r");
    FILE *fq =fopen("pop.txt","r");
    FILE *f2 = fopen("copytext.txt","w+");
    if(fp != NULL && fq != NULL){
        interleave(fp,fq,f2);
        fclose(fp);
        fclose(fq);
        fclose(f2);
    }
    return 0;
}