#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime number\n");
    else
        printf("Not prime number\n");

    return 0;
}