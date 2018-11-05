#include <math.h>

int nth_digit(int num, int n) {

    int i = (pow(10,n-1));

    int j = num / i;

    return j%10;

}