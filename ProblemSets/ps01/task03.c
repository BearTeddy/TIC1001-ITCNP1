#include <stdio.h>
// Edit your answers here
int hrs_elapsed(int h0, int m0, int s0, int h1, int m1, int s1) {
    double convert1=(h0*60*60)+(m0*60)+s0;
    double convert2=(h1*60*60)+(m1*60)+s1;
    int hours = (convert2-convert1) / 3600;
    return hours;
}
int mins_elapsed(int h0, int m0, int s0, int h1, int m1, int s1) {
    double convert1=(h0*60*60)+(m0*60)+s0;
    double convert2=(h1*60*60)+(m1*60)+s1;
    int mins = (convert2-convert1) / 60;
    int hours = (convert2-convert1) / 3600;
    int difference = mins - (hours*60);
    int difference2 = difference%60;
    return difference2;
}
int secs_elapsed(int h0, int m0, int s0, int h1, int m1, int s1) {
    double convert1=(h0*60*60)+(m0*60)+s0;
    double convert2=(h1*60*60)+(m1*60)+s1;
    int secs = (convert2-convert1);
    int mins = (convert2-convert1) / 60;
    int difference = secs - (mins*60);
    return difference;
}
// main function for your testing. Do not copy into Coursemology
int main(void) {
    // edit the input to test
    int h = hrs_elapsed(12, 20, 30, 13, 30, 50);
    int m = mins_elapsed(12, 20, 30, 13, 30, 50);
    int s = secs_elapsed(12, 20, 30, 13, 30, 50);

    printf("Your function output is h: %d, m: %d, s: %d\n", h, m, s);
    return 0;
}
