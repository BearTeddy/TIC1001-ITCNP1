#include <stdio.h>

double area1(double b, double h) {

    return 0.5*b*h;

}

double area2(double b, double h, double c) {

    return 0.5*b*h*sin(c);

}

double area3(double a, double b,double c) {

    double s = (a+b+c)*0.5;

    return sqrt(s*(s-a)*(s-b)*(s-c));

}


void main(void){
    return 0;
}