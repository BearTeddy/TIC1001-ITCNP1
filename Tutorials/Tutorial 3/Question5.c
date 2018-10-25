#include <stdio.h>
#include <stdbool.h>

void deposit(int *account, int amount) {
    *account += amount;
}
bool withdrawl(int *account, int amount) {
    if(*account>amount){
    *account -= amount;
    return true;
    }
    else{
        return false;
    }
}

bool transfer(int *from, int *to, int amount) {
    if(*from > amount){
        *from -= amount;
        *to += amount;
        return true;
    }
    return false;
}

int main (void){
    return 0;
}