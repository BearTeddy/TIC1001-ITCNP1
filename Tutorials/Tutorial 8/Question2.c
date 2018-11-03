#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int count(FILE *fp) {
    char *c;
    int count=0;
    bool bol = false;
     //CAn use this also //   while (fscanf(fp,"%*s") != EOF)// 
    while (fscanf(fp,"%s",c) != EOF) //getting string and assigning to c
    {   
       count++;
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