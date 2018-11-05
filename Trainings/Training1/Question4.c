#include <math.h>

double get_bigger_root(int a, int b, int c) {

    double det = (1.0*(b*b))-(4.0*a*c);

    double root1,root2;

   if(det>0){

       double minb = -1.0*b;

       double twoa = 2.0*a;

        root1 = (-1.0*b+sqrt(det))/twoa;

        root2 = (-1.0*b-sqrt(det))/twoa;

        if (root1>root2){

            return root1;

        }else{

        return root2;

        }

    }

    else{

        root1 = root2 = -b/(2*a);

        return root1;

    }

}