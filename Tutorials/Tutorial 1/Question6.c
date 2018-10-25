#include <stdio.h>

int gcd(int a, int b) {
    int c;
    while(b>0){
        c = b;
        b = a%b;
        a = c;
    }
    return a;
}

int main(void){
    return 0;
}

