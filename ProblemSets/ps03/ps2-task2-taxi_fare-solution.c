#include <stdio.h>

float taxi_fare(int weekday, int start_time, int duration, int distance) {
    
    int fare = 3400; // keep as integer. We will divide by 1000 when returning
    double speed = (double)distance/duration;
    int curr_day = weekday;

    // When boarding
    if (start_time < 6*60) { // before 6am
        fare += 1700; // 50% of 3.4
    } else if (start_time >= 18*60) { // after 6pm
        fare += 850; // 25% of 3.4
    } else if (curr_day < 6 && start_time < 10*60) { // before 10am on weekday
        fare += 850; // 25% of 3.4
    }

    printf("Time: %d %02d:%02d:00.00\t%dm\t+%dm\t%6.3f\n", curr_day, start_time/60, start_time%60, 0, 1001, fare/1000.0);
        
    double curr_time;
    
    int covered = 1001;
    while (covered <= distance) {
        // Compute the time at distance covered.
        // curr_time += stage/speed;  // This is bad because it causes floating point inaccuracy    
        curr_time = start_time + covered/speed;  // instead compute from starting time
        
        // wrap around the time and day
        curr_day = weekday + (int)(curr_time / (24*60));
        while (curr_day > 7) { 
            curr_day -= 7;
        }
        curr_time = (int)(curr_time) % (24*60) + curr_time - (int)curr_time;  // go back to 0 after midnight

        // check the surcharge
        int inc = 220;  // 0.22 for each segment
        if (curr_time < 6*60) { // before 6am
            inc += 110; // 50% of 0.22
        } else if (curr_time >= 18*60) { // after 6pm
            inc += 55; // 25% of 0.22
        } else if (curr_day < 6 && curr_time < 9*60+30) { // before 9:30am on weekday
            inc += 55; // 25% of 0.22
        }
        fare += inc;

        // track fare stage for display
        int stage; 
        if (covered > 10000) {
            stage = 350;
        } else {
            stage = 400;
        }
        printf("Time: %d %02d:%02d:%05.2f\t%dm\t+%dm\t%6.3f\t+%.3f\n", curr_day, (int)curr_time/60, (int)curr_time%60, (curr_time-(int)curr_time)*60, covered, stage, fare/1000.0, inc/1000.0);

        // advance by stage distance
        covered += stage;
    }
    
    printf("Time: %d %02d:%02d:%05.2f\t%dm\t+%dm\t%6.3f\n", curr_day, (int)curr_time/60, (int)curr_time%60, (curr_time-(int)curr_time)*60, distance, 0, fare/1000.0);

    // Return the fare in dollars
    return fare/1000.0;
}

int main(void) {
    // You may change the inputs to the function for testing
    double fare = taxi_fare(1, 5*60 + 50, 30, 15000);
    printf("The taxi fare is: $%.3f\n", fare);
    return 0;
}