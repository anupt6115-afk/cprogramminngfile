
#include<stdio.h>
int main() {
    int a, b, c, largest;
    printf("Enter 1st integer: ");
    scanf("%d", &a);
    printf("Enter 2nd integer: ");
    scanf("%d", &b);    
    printf("Enter 3rd integer: ");
    scanf("%d", &c);
    largest = (a > b) ?
              ((a > c) ? a : c) :
              ((b > c) ? b : c);
    printf("Largest number = %d", largest);
    return 0;
}
