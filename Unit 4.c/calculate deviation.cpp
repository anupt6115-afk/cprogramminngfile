//write a c program to calculate deviation about an average
//-calculate average first
//-then deviation =value-average

#include<stdio.h>
int main () {
int n,i;
float sum=0,avg;
	printf("enter number of elements ");
	scanf("%d",&n);
float a[n], deviation[n];
printf("enter %d numbers\n",n);
for( int i=0; i<n; i++){
	scanf("%f",&a[i]);
	sum +=a[i];
}
avg=sum/n;
for(int i=0; i<n; i++){
	deviation [i]=a[i]-avg;
}
printf("average is %f\n",avg);
printf("deviation is %n\n");
for(int i=0; i<n; i++){
	printf("%f",deviation[i]);
}
	return 0;
}