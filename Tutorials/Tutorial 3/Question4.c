#include <stdio.h>

void swap(int*, int*) ; // function prototype

void sort(int* x,int* y, int* z) {  

    // your code here

        if(*x>*y)swap(x,y);

        if(*x > *z)swap(x,z);

        if(*y>*z)swap(y,z);
}

int main(void){
    return 0;
}