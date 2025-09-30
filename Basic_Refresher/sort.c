#include <stdio.h>


void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int start, int end) {
	int pivoit = arr[end];
	int i = (start-1);

	for (int j = start; j < end; j++) {
		if (arr[j] < pivoit) {
			//i++;
			swap(&arr[++i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[end]);
	return i+1;
}

void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot-1);
        quickSort(arr, pivot+1, end);
    }
}

int factorial(int n) {
    if (n == 1) 
        return n;
    return n * factorial(n-1);
}

void fabonacci_series(int n) {
    int a = 0, b = 1, sum = 0;
    // for (int i = 0; i < n; i++) { ---> upto N steps
    //     printf("%d ", a);
    //     sum = a+b;
    //     a = b;
    //     b = sum;
    // }

    while (a <= n) {
        printf("%d ", a);
        sum = a+b;
        a = b;
        b = sum; 
    }
    printf("\n");
}

void recursive_fabonacci(int a, int b, int n) {
    if (a > n) {
        return;
    }
    printf("%d ", a);
    recursive_fabonacci(b, a+b, n);
}

void selection_sort(int arr[], int N) {

    // int i = 0;
    // while (i < N) {
    //     int min_ind = i;
    //     for (int j = i+1; j < N; j++) {
    //         if (arr[j] < arr[min_ind]) {
    //             min_ind = j;
    //         }
    //     }
    //     swap(&arr[i++], &arr[min_ind]);
    // }

    for (int i = 0; i < N-1; i++) {
        int min_ind = i;
        for (int j = i+1; j < N; j++) {
            if (arr[j] < arr[min_ind]) {
                min_ind = j;
            }
        }
        swap(&arr[i], &arr[min_ind]);
    }
}

int exponential(int base, int power) {
    if (power == 0) return 1;
    return base * exponential(base, power-1);
}

int Iterative_Exponential(int a, int b) {
    int res = 1;
    while (b) {
        if (b % 2 == 0) {
            a *= a;
            b /= 2;
        }else {
            res *= a;
            b--;
        }
    }
    return res;
}

int main() {
	int arr[5] = {5, 4, 32, 1, 2};
	selection_sort(arr, 5);
    printf("%u\n", factorial(100));
    printf("%u\n", exponential(5, 13));
    printf("%u\n", Iterative_Exponential(5, 13));
    recursive_fabonacci(0, 1, 8);
    printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}



}