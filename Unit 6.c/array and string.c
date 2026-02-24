
//store n numbers in array
//-find maximin and minimum
//-priting backwards
//-print array or string in reverse order 
//-store numbers in arrar[1,3,4,10,12,30,40]40 is largest


#include<stdio.h>
int main () {
	int n,i ,max,min;
	int arr[100];
	int maximum;
	printf("enter numbers of elements");
scanf("%d",&n);
printf("enter %d numbers\n",n);
for(int i=0; i<n; i++){
	scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
for(int i=1; i<n; i++){
	if(arr[i]>max)
	max=arr[i];
	if(arr[i]<min)
	min=arr[i];
}
printf("maximum element is %d\n",max);
printf("minimum element is %d\n",min);
printf("array in reverse order\n");
for(int i=n-1; i>=0; i--){
	printf("%d",arr[i]);
}
printf("largest element in the array is %d\n",max);
	return 0;
}