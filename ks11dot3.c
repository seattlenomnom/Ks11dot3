/* sourcefile for ks11dot3
 *
 * DESCRIPTION:
 * note the variable declationns needed to make the shift operator work.
 *
 * NOTES:
 * 12/06/2023
 * set up project on local host and on github.
 *
*/



/* includes */

#include <stdio.h>



/* defines */













/* structure defines */









/* function declarations */



unsigned int shift(unsigned int value, int n);



int main(int argc, char *argv[]) {

    unsigned int w1 = 0177777u, w2 = 0444u;

    printf("%o\t%o\n", shift(w1, 5), w1 << 5);
    printf("%o\t%o\n", shift(w1, -6), w1 >> 6);
    printf("%o\t%o\n", shift(w2, 0), w2 >> 0);
    printf("%o\n", shift(shift(w1, -3), 3));



    return(0);
}





/* function defines */


unsigned int shift(unsigned int value, int n){

    if(n > 0)               // left shift
        value <<= n;
    else                    // right shift
        value >>= -n;



    return(value);
}








