#include <stdio.h>

int uber_fare(int distance) {

    int cost=240;

    if(distance<1000){

        return cost;

    }else{

        if(distance<10000){

            cost= cost + ((distance-1000)/200)*10;

            return cost;

        }else{

            cost =cost + (9000/200)*10;

            cost = cost + ceil((distance-10000)/150.0) * 10;

         return cost;

        }

    }

}