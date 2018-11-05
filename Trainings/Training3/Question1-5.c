#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_perfect_number(int num) {

    if(num==1){

        return false;

    }

    int sum=1;

    for(int i=2; i<= sqrt(num); i++){

        if(num % i == 0){

          if(num/i==0){

                sum +=i;

            }else{

                sum +=(i+num/i);

            }

        }

    }

    printf("%d\n",sum);

    if(sum == num){

        return true;

    }

    else{

        return false;

    } 

}
int invert_number(int num) {

    int result=0;

    while(num != 0){

        result = result*10;

        result = result + (num%10);

        num=num/10;

    }

    return result;

}
int number_of_digits(int num) {

    if(num==0){

        return 1;

    }

    int count=0;

    while(num > 0){

        num= num/10;

        count++;

         printf("%d\n",num);

         printf("%d\n",count);

    }

    return count;

}
int nth_digit(int num, int n) {

    

    int result=0;

    while(num != 0){

        result = result*10;

        result = result + (num%10);

        num=num/10;

    }

    

    int j = result/pow(10,n-1);

    return j%10;

}
double leibniz_pi(int n) {

    double val=0;

    double bufn=1.0;

    for (int i=1;i<=n;i++){

        if(i%2!=0){

            val += (4/(bufn));

        }else{

            val += (-1*(4/bufn));

        }

        bufn=bufn+2;

    }

    return val;

}