#include <stdio.h>

void replaceNegative(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0)
            arr[i] = 0;
    }
}

int main() {
    int arr[6] = {5, -3, 8, -1, 0, -7};

    printf("Before replacing:\n");
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);

    replaceNegative(arr, 6);

    printf("\nAfter replacing:\n");
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);

    return 0;
}