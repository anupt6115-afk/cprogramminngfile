#include <stdio.h>

void calculate(int a, int b, int *sum, int *diff, int *prod) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
}

int main() {
    int x = 10, y = 5;
    int sum, diff, prod;

    calculate(x, y, &sum, &diff, &prod);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    return 0;
}