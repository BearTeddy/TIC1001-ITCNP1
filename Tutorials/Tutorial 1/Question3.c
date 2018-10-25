#include <stdio.h>
int foo(int a) {
/* Enter fragment here */
    if(a<0){
        a=a+3;
    }else{
        if (a<500){
            a=a*2;
        }else if(a<1000){
            a=a*10;
        }else{
            a=0;
        }
    }
    return a;
}

int main(void){
    return 0;
}