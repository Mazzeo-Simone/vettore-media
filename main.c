#include<stdio.h>
#include"array.h"

#define N 5

int main(void){
	double arr[N] = {2.3, 4.7, 5.9, 8.2, 3.7};
	size_t n = sizeof(arr)/sizeof(double);
	double m = media(arr, n);
	for(int i=0; i<N; i++)
		printf("%.2lf\t", arr[i]);
	printf("\n");	
	printf("\n");	
	
	printf("la media e': %.2lf\n", m);
	return 0;
}