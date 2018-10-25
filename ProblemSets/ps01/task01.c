#include <stdio.h>
#include <math.h>

// Edit your answer here
double freezer(int hrs, int mins, int t0, double c) {

    double e = 2.71828;
    double Tf = -10.0;
    double temp = t0-(t0-Tf)*(1-pow(e,(-1*c*(hrs+(mins/60.0)))));
    return temp;

}



// main function for your testing. Do not copy into Coursemology
int main(void) {
    double out = freezer(1, 30, 27, 1.5);  // edit the input to test
    printf("Your function output is: %f\n", out);
    return 0;
}