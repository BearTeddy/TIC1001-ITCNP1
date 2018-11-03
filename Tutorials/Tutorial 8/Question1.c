#include <stdio.h>


int count(FILE *fp) {
    int c;
    int count=0;
    while ((c = fgetc(fp)) != EOF) //getting char by char as int.
    {
        if((c>='a' && c<='z')||(c>='A' && c<='Z')){
            count++;
        }
    }
    return count;
}


int main (void){
    FILE *fp = fopen("wind.txt","r");
    if(fp != NULL){
        int c = count(fp);
        fclose(fp);
        printf("%d\n",c);
    }
    return 0;
}