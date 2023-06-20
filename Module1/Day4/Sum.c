#include <stdio.h>

void cal(int arr[], int size, int* sum, float* avrg) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += arr[i];
    }
    *avrg = (float)(*sum) / size;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum;
    float avrg;

    cal(arr, size, &sum, &avrg);

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sum: %d\n", sum);
    printf("Avrg: %.2f\n", avrg);

    return 0;
}
