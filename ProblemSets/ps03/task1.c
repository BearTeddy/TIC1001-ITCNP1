/*************************
 * Problem Set 3: Task 1 *
 *************************
 
Make sure you have answered ALL 
the questions in this task.   */

#include <stdio.h>

// a.

int factorial(int n) {

    // your answer here.

    if (n==1) return 1;

    return n * factorial(n-1);

}

/* b. 

What happens to your function when n >= 13? Explain why.

(Put your answer within the comments)

Answer:  Int is 2 or 4 byte depending on compiler and 

-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647.

13! = 6,227,020,800.

*/

double factorialLog(int n){

    double sum = 0;

    while (n>0){

        sum += log10(n);

        n--;

    }

    return sum;

}

// c.

int choose(int n, int k) {

    // your answer here

    double val = factorialLog(n);

    double deval = factorialLog(k)+factorialLog(n-k);

    val = pow(10,val);

    deval = pow(10,deval);

    return round(val/deval);

}

/* d. 

Are you able to make use of the factorial function in choose? Explain why.

(Put your answer within the comments)

Answer:  Yes, can be used. factorial function is defined before choose(). Value result will be incorrect.

On the other hand for the values, n input could be greater than 13. but if n is < 13, the factorial is valid.

*/

// e. 

void pascal_triangle(int row) {

    // your code here

    int number = 0;

    while(number<=row){

        printf("%d ",choose(row,number));

        number++;

    }

}

int main(void){
    return 0;
}
