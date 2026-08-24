#include <stdio.h>
#include <stdlib.h>
	
	int main(int argc, char *argv[]) {

	int tempo, velocidade;
	
	scanf("%d", &tempo);
	scanf("%d", &velocidade);
	
	int distancia = tempo * velocidade;
	
	double litros = distancia / 12.0;
	
	printf("%.3f\n", litros);
			
	return 0;
}
