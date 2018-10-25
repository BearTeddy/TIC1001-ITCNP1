#include <stdio.h>

float taxi_fare(int weekday, int start_time, int duration, int distance) {

    // your code here

}

int main(void) {
    // You may change the inputs to the function for testing
    double fare = taxi_fare(1, 5*60 + 50, 30, 15000);
    printf("The taxi fare is: $%.3f", fare);
    return 0;
}