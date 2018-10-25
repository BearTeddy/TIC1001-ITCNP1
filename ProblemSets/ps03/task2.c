/*************************
 * Problem Set 3: Task 2 *
 *************************
 
Make sure you have answered ALL 
the questions in this task.   */

#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {

    // your answer here

    return (((year%4==0)&&(year%100!=0))||(year%400==0));

}

// b. 

int days_in_month(int month, int year) {

    // your answer here

    if(is_leap_year(year) && month == 2){

        return 29 + (month + (month/8)) % 2 + 2 % month + 2 * (1/month);

    }

    return 28 + (month + (month/8)) % 2 + 2 % month + 2 * (1/month);

}

// c.

int days_from_epoch(int day, int month, int year) {

    int epochyr = 1970; 

    int sum=0;

    int epochmonth = 1;

    int epochday = 1;

    

    if(year >= epochyr){

    while (epochyr < year){

        if(is_leap_year(epochyr)) sum+=366;

        else sum+=365;

        epochyr++;

    }

    while (epochmonth < month){

        sum += days_in_month(epochmonth,year);

        epochmonth++;

    }

    sum += day-epochday;

    return sum;

    }

    else if (year < epochyr){

        if(day>epochday)

        {

            sum += day-epochday;

        }

        while(month>epochmonth)

        {   

            sum=sum + days_in_month(month,year);

            month--;

        }

        while(year<epochyr)

        {

            if(is_leap_year(year)==true)

            {

                sum=sum-1;

            }

            year++;

            sum = sum-365;

        }

    return sum;

    }

    return 0;

}

// d.

int day_of_week(int day, int month, int year) {

    // your answer here

    int tday = abs(days_from_epoch(day,month,year));

    int var = tday % 7;

    if(year>=1970){

        switch (var){

            case 0: return 4;

                    break;

            case 1: return 5;

                    break;

            case 2: return 6;

                    break;

            case 3: return 0;

                    break;

            case 4: return 1;

                    break;

            case 5: return 2;

                    break;

            case 6: return 3;

                    break; 

            default: printf("Error");

                    return 10;

        }

    }else{

        switch (var){

            case 0: return 4;

                    break;

            case 1: return 3;

                    break;

            case 2: return 2;

                    break;

            case 3: return 1;

                    break;

            case 4: return 0;

                    break;

            case 5: return 6;

                    break;

            case 6: return 5;

                    break; 

            default: printf("Error");

                    return 10;

        }

    }

}

// e. 

void display_month(int month, int year) {

    // your code here

    int dim = days_in_month(month,year);

    int diw = day_of_week(1,month,year);

    int breakline=0;

    //printf("%d",diw);

    printf ("  S  M  T  W  T  F  S\n");

    switch (diw){

        case 0: printf("");

                breakline = 1;

                break;

        case 1: printf("   ");

                breakline = 2;

                break;

        case 2: printf("      ");

                breakline = 3;

                break;

        case 3: printf("         ");

                breakline = 4;

                break;

        case 4: printf("            ");

                breakline = 5;

                break;

        case 5: printf("               ");

                breakline = 6;

                break;

        case 6: printf("                  ");

                breakline = 7;

                break; 

    }

    for (int i=1;i<=dim;i++){

        printf("%3d",i);

        if(breakline == 7){

            breakline = 0;

            printf("\n");

        }

        breakline++;

    }

}

int main (void){
    return 0;
}