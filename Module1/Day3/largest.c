#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number;
    printf("Enter a Four_digit number: ");
    scanf("%d", &number);
    number = abs(number);

    int max= 0;

    for (int i = 0; i < 4; i++) {
        int temp = number / (int)pow(10, i + 1) * (int)pow(10, i) + number % (int)pow(10, i);

        if (temp > max) {
            max = temp;
        }
    }

    printf("The largest number is : %d\n", max);

    return 0;
}

