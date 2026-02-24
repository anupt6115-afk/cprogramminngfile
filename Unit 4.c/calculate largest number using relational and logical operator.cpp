
#include<stdio.h>
int main(){
    int a, b, c, largest;
    printf("Enter 1st integer: ");
    scanf("%d", &a);
    printf("Enter 2nd integer: ");
    scanf("%d", &b);    
    printf("Enter 3rd integer: ");
    scanf("%d", &c);
    if(a >= b && a >= c){
        largest = a;
    }
    else if(b >= a && b >= c){
        largest = b;
    }
    else
        largest = c;
    printf("Largest number = %d", largest);
    return 0;
}
