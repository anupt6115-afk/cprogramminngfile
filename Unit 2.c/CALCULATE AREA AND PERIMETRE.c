#include<stdio.h>
int main(){
  int l,b,A,P;

    // Taking length and breath input from user
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);

    // Calculating area
    A = l * b;

    // Calculating perimeter
    P = 2 * (l + b);

    // Display results
    printf("Area of rectangle is %d\n",A);
    printf("perimeter of rectangle is %d\n",P);

    return 0;
}