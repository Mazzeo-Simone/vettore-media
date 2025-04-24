#include<stddef.h>

double media(double *arr, size_t n){
	double media = 0;
	for(size_t i=0; i<n; i++)
		media+=arr[i];

	return media/n;
}