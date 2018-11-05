#include <math.h>

double investment(int p, int r, int n) {

    return (p*(1.0-(pow(r/100.0,n+1)))/(1.0-(r/100.0)));

}