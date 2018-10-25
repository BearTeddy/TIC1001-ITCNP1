#include <stdio.h>

// Edit your answers here
double f_to_c(double temp) {
    return (temp-32.0)*(5.0/9);
}

double c_to_f(double temp) {
    return (temp*9/5.0)+32;
}


// main function for your testing. Do not copy into Coursemology
int main(void) {
    double out;
    out = f_to_c(72);    // edit the input to test
    printf("Your function output is: %f\n", out);

    out = c_to_f(27);    // edit the input to test
    printf("Your function output is: %f\n", out);
    return 0;
}