#include<stdio.h>
#include<stdlib.h>
float variance_Fun(int *arr, int size) {
    int sum = 0;
    //Sum of N no.of elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    //Mean = sum of elements/size
    int mean = sum / size;
    sum = 0;
    // printf("%d %d", sum, mean);

    //To calculate variance(helper)
    int *D = malloc(size * sizeof(int));
    //Sub mean from N no.of elements
    for (int i = 0; i < size; i++) {
        D[i] = arr[i] - mean;
    }
    //For D^2
    int *DD = malloc(size * sizeof(int));
    //Squaring each element to calculate D^2
    for (int i = 0; i < size; i++) {
        DD[i] = D[i] * D[i];
    }
    //Adding all resultant elements
    for (int i = 0; i < size; i++) {
        sum += DD[i];
    }
    //Calculating the variance
    float variance = (float)sum / size;
    return variance;
}
int main() {
    int size;
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("%f", variance_Fun(arr, size));

    //Printing the DD array
    // for (int i = 0; i < size ; i++) {
    //     printf("%d ", DD[i]);
    // }

    //Printing D(variance) array
    // for (int i = 0; i < size ; i++) {
    //     printf("%d ", D[i]);
    // }
    
    //Printing the actual array
    // for (int i = 0; i < size ; i++) {
    //     printf("%d ", arr[i]);
    // }
}