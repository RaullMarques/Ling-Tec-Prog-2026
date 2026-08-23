#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int totaldias;
	int anos, meses, dias;
	int resto;
	
	scanf("%d", &totaldias);
	
	anos = totaldias / 365;
	resto = totaldias % 365;
	
	meses = resto / 30;
	dias = resto % 30;
	
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	
			
	return 0;
}
