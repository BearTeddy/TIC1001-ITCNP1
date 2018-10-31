#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int count(FILE *fp) {
    int c;
    int count=0;
    bool bol = false;
    while ((c = fgetc(fp)) != EOF) //getting char by char as int.
    {   
        if(bol == true) {
            bol=false;
            continue;
        }
        if(isspace(c)){
            if(c=='\n'){ 
                count++;
                bol = true;
            }
        }
    }
    return count;
}


int main (void){
    FILE *fp = fopen("pop.txt","r");
    if(fp != NULL){
        int c = count(fp);
        fclose(fp);
        printf("%d\n",c);
    }
    return 0;
}