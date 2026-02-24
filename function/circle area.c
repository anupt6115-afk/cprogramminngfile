#include <stdio.h>

void circleArea(float radius) {
    float area = 3.1416 * radius * radius;
    printf("Area of circle = %.2f\n", area);
}

int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    circleArea(r);
    return 0;
}