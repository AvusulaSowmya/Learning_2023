#include <stdio.h>

int calculateTotal(const char* timeString) {
    int hours, minutes, seconds;
    scanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);
    int total = hours * 3600 + minutes * 60 + seconds;
    return total;
}
int main() {
    const char timeString[] = "12:30:45";   
    int total = calculateTotal(timeString);
    printf("Time: %s\n", timeString);
    printf("Total seconds: %d\n", total);
    
    return 0;
}

