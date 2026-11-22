#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double ***pointer = NULL;

    printf("%f\n", *(*(*(pointer = malloc(sizeof(double **))) = malloc(sizeof(double *))) = malloc(sizeof(double))) = 2);

    printf("%f\n", ***pointer);

    free(**pointer);
    free(*pointer);
    free(pointer);

    return 0;
}
