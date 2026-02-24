

#include<stdio.h>
int main()  {
int total;
int average;
int m1,m2,m3,m4,m5;
	printf("enter marks of 5 subject");
scanf("%d %d %d %d %d",&m1 ,&m2 ,&m3 ,&m4 ,&m5);
total =m1+m2+m3+m4+m5;
average =total/5;
printf("total marks is %d\n",total);
printf("average marks is %d\n",average);
return 0;
}