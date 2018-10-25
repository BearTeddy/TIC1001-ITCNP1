#include <stdio.h>
#include <stdbool.h>

void printcells(bool[],int);

void nextgen(bool[],int);

void game_of_life(bool cells[], int size, int num_gen) {
    printcells(cells,size);
    for (int i=1; i< num_gen;i++){
        nextgen(cells,size);
    }
}

void printcells(bool cells[],int size){
    for (int i=0; i<size;i++){
        if (cells[i]==false) printf("_");
        else printf("X");
    }
    printf("\n");
}


void nextgen(bool cells[],int size){
    bool buf[size];
    for (int i=0; i<size;i++){
        buf[i]=false;
    }
    for (int i =0; i<size;i++){
        if (cells[i]==true){
            int j = i-1;
            int k = i+1;
            if (j>=0 && cells[j-1]!=true && cells[j]!=true){
                buf[j]=true;
            }
            if (k<=size && cells[k+1]!=true && cells[k]!=true){
                 buf[k]=true;
            }
        }
    }

    for (int i=0; i<size;i++){
        cells[i]=buf[i];
    }
    printcells(buf,size);

}

int main(void){
    return 0;
}