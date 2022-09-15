#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binaryGen(FILE *fh, int count) {
    int i;

    for (i = 0; count/2 > i ; i+=2)
    {
        fprintf(fh, "%d,%d\n", i, 0);
        fprintf(fh, "%d,%d\n", i+1, 0);
        fprintf(fh, "%d,%d\n", i+1, 1);
        fprintf(fh, "%d,%d\n", i+2, 1);
    }
}
