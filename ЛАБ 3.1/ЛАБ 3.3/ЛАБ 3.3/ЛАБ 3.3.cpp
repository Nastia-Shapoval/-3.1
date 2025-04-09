#include <stdio.h>

int main() {
    int seconds;
    printf("Enter the number of seconds: ");
    scanf_s("%d", &seconds);

    int h = seconds / 3600;
    int m = (seconds % 3600) / 60;
    int s = seconds % 60;

    printf("Hours: %d, Minutes: %d, Seconds: %d\n", h, m, s);

    return 0;
}
