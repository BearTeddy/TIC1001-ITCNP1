/*
... Author - Zhu En Chay
*/


#include <stdio.h>
#include <stdbool.h>
void greg_to_mayan(int day, int month, int year) {
    // your code here
    int epochreference = days_from_epoch(21,12,2012);
    int numberofdays = days_from_epoch(day,month,year);
    int difference = numberofdays-epochreference;
    int first=13,second=0,third=0,forth=0,fifth=0;
    if (difference>=0)
    {
        fifth+=difference;
        while (fifth>20)
            {
                fifth=fifth-20;
                forth++;
                while(forth>18)
                {
                    forth=forth-18;
                    third++;
                    while(third>20)
                    {
                        third=third-20;
                        second++;
                        while(second>20)
                        {
                        second=second-20;
                        first++;
                        }
                    }
                }
            }
        
            printf("%d.%d.%d.%d.%d",first,second,third,forth,fifth);
    }
    else
    {
        fifth+=difference;
        while (fifth<0)
        {
            fifth+=20;
            forth--;
            while(forth<0)
            {
            forth+=18;
            third--;
            while (third<0)
            {
                third+=20;
                second--;
                while (second<0)
                {
                    second+=20;
                    first--;
                }
            }
            }
        }
        printf("%d.%d.%d.%d.%d",first,second,third,forth,fifth);
    }
}

int main (void){
    return 0;
}