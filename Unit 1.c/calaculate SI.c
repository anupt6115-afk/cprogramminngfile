#include<stdio.h>
int main(){
  int p,t,r,SI;

    // Taking length and breath input from user
    printf("Enter principle time and rate: ");
    scanf("%d %d %d", &p, &t, &r);

    // CalculatingSI
    SI=(p*t*r)/100;

  

    // Display results
   printf("simple interset is %d",SI);

    return 0;
}