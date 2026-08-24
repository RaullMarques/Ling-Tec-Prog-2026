#include <stdio.h>
#include <stdlib.h>
	
	int main(int argc, char *argv[]) {

	double total = 780000.00;
	
	double primeiro = total * 0.46;
	double segundo = total * 0.31;
	double terceiro = total * 0.22;
	
	printf("Primeiro ganhador(46%%): R$ %.2f\n", primeiro);
	printf("Segundo ganhador(36%%): R$ %.2f\n", segundo);
	printf("Terceiro ganhador(22%%): R$ %.2f\n", terceiro);
			
	return 0;
}
