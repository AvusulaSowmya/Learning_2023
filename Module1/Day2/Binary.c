#include <stdio.h>

void printExponent(double a) {
    unsigned long long *ptr = (unsigned long long *)&a; 
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
    printf("Exponent in binary: 0b");
    for (int i = 11; i >= 0; i--) {
        printf("%lld", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double a = 0.7;
    printExponent(a);

    return 0;
}

