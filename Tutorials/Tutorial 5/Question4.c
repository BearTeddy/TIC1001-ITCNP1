#include <stdio.h>

void print_song(int n) {

    char Song[12][27] = {
        "a partridge in a pear tree",
        "two turtle doves",
        "three French hens",
        "four calling birds",
        "five golden rings",
        "six geese a laying",
        "seven swans a swimming",
        "eight maids a milking",
        "nine ladies dancing",
        "ten lords a leaping",
        "eleven pipers piping",
        "twelve drummers drumming"
        };
    char ordinal[12][9] = {"first","second","third","fourth","fifth","sixth", "seventh","eighth","ninth","tenth","eleventh","twelfth"};    
    int num=0;
    for (int i=1;i<=n;i++){
        if(i>1) printf("\n");
        printf("On the ");
        printf("%s",ordinal[i-1]);
        printf(" day of Christmas,\n");
        printf("my true love sent to me,\n");
        for(int j=num;j>=0;j--){
            if(num>0 && j==0) printf("and ");
            printf("%s",Song[j]);
            if(num>=0 && j==0)printf(".\n");
            else printf(",\n");
        }
        num++;
    }
}

int  main (void){
    return 0;
}