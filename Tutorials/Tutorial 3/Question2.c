#include <stdio.h>

void print_10_to_b(int n, int b) {
    // your answer here
    int rem=0;
    int num=0, i=1;
    while (n>0){
    rem = n % b;
    num = num + (rem * i);
    n = n/b;
    i *= 10;
    }
    printf("%d\n",num);

}

void print_b1_to_b2(int n, int b1, int b2) {
    // your answer here
    long int decnum=0;
    long int rem=0,i=0,num=0;
    while(n>0){
      rem = n%10;
      n=n/10;
      decnum = decnum+ (rem * pow(b1,i));
      i++;
    }
    print_10_to_b(decnum,b2);
}

int main (void){
    return 0;
}