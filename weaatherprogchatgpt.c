#include<stdio.h>

float avgyear(float a[][7], int v) {
    float avg = 0;
    int sum = 0;
    for(int j = 1; j < 7; j++) { // starting from 1 to skip the first element
        sum += a[v][j];
    }
    avg = sum / 6.0; // Dividing by 6.0 to get a floating-point result
    return avg;
}

int main() {
    float arr[5][7];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            scanf("%f", &arr[i][j]);
        }
    }

    float outarr[5][2];
    for(int i = 0; i < 5; i++) {
        outarr[i][0] = arr[i][0];
        outarr[i][1] = avgyear(arr, i);
    }

    // // Output the result
    // for(int i = 0; i < 5; i++) {
    //     printf("Row %d: First element = %.2f, Average = %.2f\n", i, outarr[i][0], outarr[i][1]);
    // }

    return 0;
}
