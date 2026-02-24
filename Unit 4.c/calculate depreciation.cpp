#include<stdio.h>
int main()
{
    float original_value, rate, depreciated_value;

    printf("Enter original value: ");
    scanf("%f", &original_value);

    printf("Enter depreciation rate: ");
    scanf("%f", &rate);

    
    depreciated_value = original_value * (1 - rate/100);

    printf("Depreciated value = %f", depreciated_value);

    return 0;
}