#include <stdio.h>
#include <string.h>

// Q2
void filter(const char *original, const char threshold, char *passed, char *failed)
{
    // Your answer here
    
    // strcpy(passed,"");
    // strcpy(failed,"");
    *passed="";
    *failed="";

    int charcount = strlen(original);
    for (int i=0;i<charcount;i++){
        char c[0];
        c[0] = original[i];
          if(c[0]>=threshold){
              strncat(passed,c,1);
          }else{
              strncat(failed,c,1);
          }
    }
}

int main(void)
{ 
    char passed[500], failed[500];

    filter("ABCDEF abcdef 1234!@#", 'D', passed, failed);
    printf("\n");
    printf("P: \"%s\"\n", passed);
    printf("F: \"%s\"\n", failed);

     filter("PE is FUN!","", passed, failed);
     printf("P: \"%s\"\n", passed);
     printf("F: \"%s\"\n", failed);

    return 0;
}