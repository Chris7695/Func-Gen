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

int main(int argc, char *argv[]) {
    int i;
    if (argc != 3) {
        printf("wrong count of arguments, required format: %s <count> <output>", argv[0]);
        return 1;
    }

    FILE *fp;

    fp = fopen(argv[2], "w+");

    binaryGen(fp, atoi(argv[1]));

    fclose(fp);
}
