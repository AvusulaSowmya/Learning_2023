#include <stdio.h>

int calculate(int arr[], int size) {
    int EvenIndex = 0;
    int OddIndex = 0;
    
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            EvenIndex += arr[i];
        } else {
            OddIndex += arr[i];
        }
    }
    
    int difference = EvenIndex - OddIndex;
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


