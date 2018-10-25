#include <stdio.h>
#include <math.h>

// Edit your answer here
int ip_octet(int b) {
    int bin = b;
    int decval=0,remval=0,i=0;
    while (bin>0){
        remval = bin%10;
        bin=bin/10;
        decval += remval*pow(2,i);
        i++;
    }
    return decval;

}

// main function for your testing. Do not copy into Coursemology
int main(void) {
    int out = ip_octet(11001001);  // edit the input to test
    printf("Your function output is: %d\n", out);
    return 0;    
}
