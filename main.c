include<stdio.h>
#include"contaspazi.h"

int main(void){
	char *test = "Ciao mamma questa è una prova per contare gli spazi  ";
	size_t n_spazi = conta_spazi(test);
	printf("%s\n", test);
	printf("Spazi n: %ld\n", n_spazi);
	return 0;
}