#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int summation = 0;
    for (int i = 0; i < size; i += 2) {
        summation += arr[i];
    }

    printf("Summation of alternate elements: %d\n", summation);

    return 0;
}

