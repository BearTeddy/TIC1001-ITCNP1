#include <stdio.h>

// Q1a
int best_speed(int start, int end, int max_speed) {
    // Your answer here
     int rem = end-start;
    for (int i = max_speed;i>0;i++){
        if(rem%max_speed == 0) return max_speed;
        max_speed--;
    }
    return max_speed;
}


// Q1b
int stopping_distance(int speed) {
    // Your answer here
        int dis = 0;
    for (int i=speed;i>0;i--){
        dis += i;
    }
    return dis;
}


// Q1c

void travel(int start, int end, int max_speed) {
    // Your answer here
        // Your answer here
    int stop = stopping_distance(max_speed);
    printf("%d \n",stop);
    int dis = end-start;
    int acc = 0;
    for (int i=0;start<end;i++){
        start+=acc;
        if(start<(end-stopping_distance(acc)) && acc<max_speed){
            acc++;
        }else if(start>(end-stopping_distance(acc)) && acc<=max_speed ){
            acc--;
        }
        printf("%d " , i);
        printf("%d ",start);
        printf("%d \n",acc);
    }
}

int main(void) {
    // printf("%d\n", best_speed(44, 89, 4));
    // printf("%d\n", best_speed(44, 89, 5));
    // printf("%d\n", best_speed(44, 89, 10));
    //printf("%d\n", stopping_distance(1));
    // printf("%d\n", stopping_distance(5));

     //travel(44, 89, 5);
    travel(44, 89, 10);
     //travel(44, 89, 4);
}