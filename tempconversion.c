#include <stdio.h>

#define LOWER   -200    // lower bound
#define UPPER   1500    // max temp in farinheit
#define STEP    20      // step size

float conversion(int fahr){

    float celcius;
    celcius = (5.0/9.0)*(fahr-32);
    return(celcius);
}

int main(){

    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){

        float celcius;
        celcius = conversion(fahr);
        printf("fahrenheit: %5d Celcius: %6.2f\n", fahr, celcius);
        
    }

    return(0);
}