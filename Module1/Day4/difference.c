#include <stdio.h>

int calculate(int arr[], int size) {
    int Odd = 0;
    int Even = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            Even += arr[i];
        } else {
            Odd += arr[i];
        }
    }
    
    int difference = Even - Odd;
    return difference;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int difference = calculate(arr, size);
    
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Difference: %d\n", difference);
    
    return 0;
}

