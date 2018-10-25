#include <stdio.h>
#include <math.h>

typedef struct HSL {
    int hue;
    int sat;
    int lum;
} HSL;

// *** Do not edit above this line. ***
// Only copy this function into Coursemology
HSL rgb_to_hsl(int red, int green, int blue) {
    int hue, sat, lum;  // assign the correct values to these variables

    // Your answer here.
        int hue, sat, lum;  // assign the correct values to these variable

    double R,G,B,max,min;

    R = red/255.0;

    G = green/255.0;

    B = blue/255.0;

    // Your answer here.

     if (R>G && R>B){ // R Biggest

     printf("RBiggest\n");

     max = R;

        if(G<B){ // G Smallest

            min = G;

        }else{ //B Smallest

            min = B;

        }

        hue = round(((G-B)/(max-min))*60.0);

        printf("G-B : %.2f",G-B);

        printf("max-min : %.2f",max-min);

     }

     else if (G>R && G>B){ // G Biggest

        printf("GBiggest\n");

        max = G;

        if(R<B){ // R Smallest

            min =R;

        }else{ // B Smallest

            min =B;

        }

        hue = round((2.0+((B-R)/(max-min)))*60.0);

     }

     else{ // B Biggest

        printf("BBiggest\n");

        max=B;

        if(R<G){ // R Smallest

            min = R;

        }else{ //G Smallest

            min = G;

        }

        double diff = R-G;

        double mAdif = max-min;

        hue = round((4.0+((R-G)/(max-min)))*60.0);

     }

    if(hue<0) hue = hue +360;

    float lumf =((max+min)/2);

    lum = round(((max+min)/2)*100); // lum

    if(max==min){

        hue = 0;

        sat = 0;

    }else{

        if (lumf<0.5){

            float val = ((max-min)/(max+min));

            sat = round(val*100);

        }else{

            float val =((max-min)/(2-max-min));

            sat = round(val)*100;

        }

    }
    // *** Do not edit this line. It is to return 3 values together ***
    return (HSL){.hue=hue, .sat=sat, .lum=lum};
}

int main(void) {
    // edit these RGB values to test
    int red = 24;
    int green = 98;
    int blue = 118;
    
    HSL hsl = rgb_to_hsl(red, green, blue);
    printf("The result is Hue:%d, Sat:%d, Lum:%d\n", hsl.hue, hsl.sat, hsl.lum);

    return 0;
}