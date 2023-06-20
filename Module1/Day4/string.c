#include <stdio.h>
int string(const char* str) {
    int res = 0;
    int sign = 1;
    int i = 0;
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }
    while (str[i] != '\0')
    {
        int digit = str[i] - '0';
        res = res * 10 + digit;
        i++;
    }
    res = res * sign;
    return res;
}

int main() {
    const char str[] = "-12345";
    int num = string(str);
    printf("String: %s\n", str);
    printf("Integer: %d\n", num);
    return 0;
}

