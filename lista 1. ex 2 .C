#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	double valor;
	
	printf("Digite um valor positivo:");
	scanf("%lf", &valor);
	
	printf("Em notacao cientifica: %e\n", valor);
	
	return 0;
}
