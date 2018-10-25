#include <stdio.h>
#include <stdbool.h>

void init_primes(bool primes[], int n) {

    primes[0] = false;

    for (int i=1;i<n;i++){
        primes[i] = true;
    }

}

void sieve_primes(bool primes[], int size, int n) {

      for (int i=n; i<size;i++){
        if((i+1)!=n && (i+1)%n==0)primes[i]=false;
    }

}

void print_primes(int n) {

    bool primes[n]; //Warning. Cannot use this in C. Need to use CPP but GCC is forgiving.

    init_primes(primes,n);

    for (int i=2;i<n;i++){
        sieve_primes(primes,n,i);
    }

    for (int j=0;j<n;j++){
        if(primes[j]==true){
            printf("%d ",j+1);
        }
    }
}

int main(void){
    return 0;
}