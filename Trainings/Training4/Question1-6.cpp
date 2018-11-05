#include <iostream>
#include <math.h>
using namespace std;

bool is_triangle(double x,double y, double z) {
    return (x+y>z && x+z>y && y+z>x) ? true:false;
}

bool right_angled(double A, double B, double C)
{   
    double x,y,z;
    z=min(min(A,B),C);
    x=max(max(A,B),C);
    if(A!=z && A!=x) y=A;
    else if (B!=z && B!=x)y=B;
    else y=C;
    return (pow(z,2)+pow(y,2)==pow(x,2)) ? true:false;
}

void triangle_type(double A, double B, double C)
{                    // This question can be solved by different ways. Think about a concise answer.
    if (is_triangle(A,B,C)){
        if (A==B && A==C){
            cout<<"Equilateral"<<endl;
        }
        else if (A==B || B==C || A==C){
            cout<<"Isosceles"<<endl;
        }else{
            cout << "Scalene"<<endl;
        }
    }
    else{
        cout<<"Not a triangle"<<endl;
    }

}

bool is_prime(long long int n)  
{
    bool flag=true;
     for(int i = 2; i <= n / 2; i++) {
       if(n % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

long long int biggest_prime(long long int x) {
    while (x>0){
        if(is_prime(x)){
            return x;
        }
        x--;
    }
}

int prime_count_in_interval(long long int start, long long int end)  
{
    int flag=0;     //You may use this variable if you wish, to flag when a prime number is found or not
    int count=0;
    while (start <=end)
        {
        if(is_prime(start)) count ++;
        start++;
        }
    return count;
}

int main (void){
    cout<<right_angled(3, 4, 5);
    return 0;
}