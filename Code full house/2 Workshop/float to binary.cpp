#include "ieee754.h"
#include <stdio.h>
#include <math.h>

//This program convert a floating number to its binary representation (IEEE754) in computer memory
int main() {
    long double f, binaryTotal, binaryFrac = 0.0, frac, fracFractor = 0.1;
    long int integer, binaryInt = 0;
    long int p = 0, rem, temp;

    printf("\nEnter floating number: ");
    scanf("%Lf", &f);

    //separate the integer part from the input floating number
    integer = (int)f;

    //separate the fractional part from the input floating number
    frac = f - integer;

    //loop to convert integer part to binary
    while (integer != 0) {
        rem = integer % 2;
        binaryInt = binaryInt + rem *pow(10, p);
        integer = integer / 2;
        p++;
    }

    //loop to convert fractional part to binary
    while (frac != 0) {
        frac = frac * 2;
        temp = frac;
        binaryFrac = binaryFrac + fracFractor * temp;
        if (temp == 1)
            frac = frac - temp;

        fracFractor = fracFractor / 10;
    }

    binaryTotal = binaryInt + binaryFrac;
    printf("binary equivalent = %Lf\n", binaryTotal);
}
