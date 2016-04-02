 /*
 * Assignment: Bit Twiddling
 * Class: CSC 252 Spring 2016
 *
 * TA: Wolf Honore (whonore@u.rochester.edu)
 *
 * You may use this program to write tests for your solutions in bits.c.
 */

#include <stdio.h>
#include <stdlib.h>
#include "bits.h"

int main(int argc, char **argv) {
    /* Write your tests here. */
    //int result = bitAnd(1,2);
    //printf("%d", result);
    printf("%d", evenBits());
    //printf("%d\n", swapBytes(1985229328));
    //printf("%d\n", 1985229328);
    //printf("%d\n", rotateLeft(1985229328, 8));

    // printf("%d\n", 2147483646);
    //printf("%d\n", 2147483646+1);
    //printf("%d\n", (2147483646+2));
    // printf("%d\n", 2147483646+3);
    // printf("%d\n", 2147483646+4);
    // printf("%d\n", addOver(2147483646,0));
    // printf("%d\n", addOver(2147483646,1));
    // printf("%d\n", addOver(2147483646,2));
    // printf("%d\n", addOver(2147483646,3));
    // printf("%d\n", addOver(-2147483646,-2147483646));
    // printf("%d\n", addOver(-21,-214748364));
    //

    // printf("%d\n", lessThan(-4,-5));
    //printf("%d\n", lessThan(4,4));
    //int x = 128;
    //printf("%d\n", isPwr2(2));
    // printf("%d\n", isPwr2(3));
    // printf("%d\n", absHalf(54));
    //  printf("%d\n", absHalf(-54));
    // printf("%d\n", boundedMult(54, 0));
    // printf("%d\n", multFiveEighths(-9));
    // printf("%d\n", multFiveEighths(8));
    printf("%d\n", boundedMult(2, 0));
    printf("%d\n", boundedMult(2147483642, 0));
    printf("%d\n", boundedMult(-2147483642, 0));



    return 0;
}
