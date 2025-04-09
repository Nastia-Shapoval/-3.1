#include <stdio.h>
#include <math.h>

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf_s("%f", &r);

    const float PI = 3.14159265;
    float area = PI * r * r;
    printf("Area of the circle: %.2f\n", area);

    return 0;
}