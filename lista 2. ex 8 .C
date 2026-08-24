#include <stdio.h>
#include <stdlib.h>
	
	int main(int argc, char *argv[]) {

	int N;
	scanf("%d", &N);
	
	int horas = N / 3600;
	int resto = N % 3600;
	
	int minutos = resto / 60;
	int segundos = resto % 60;
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
			
	return 0;
}
