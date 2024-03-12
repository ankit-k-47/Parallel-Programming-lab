#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
 
#define NUM_POINTS 10000000
 
int main() {
    int i, count = 0;
    double x, y, pi;
     srand(12345);

    #pragma omp parallel for private(x, y) reduction(+:count)
    for (i = 0; i < NUM_POINTS; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        if ((x * x + y * y) <= 1.0) {
            count++;
        }
    }
    pi = 4.0 * (double)count / NUM_POINTS;
    printf("Estimated value of PI: %.6f\n", pi);
 
    return 0;
}
